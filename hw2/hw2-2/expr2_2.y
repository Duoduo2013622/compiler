%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef YYSTYPE
#define YYSTYPE char*
#endif
char idStr[50];
char numStr[50];
int yylex ();
extern int yyparse();
FILE* yyin;
void yyerror(const char* s);
%}


%token NUMBER
%token ID
%left '+' '-'
%left '*' '/'
%right UMINUS

%%


lines   :	lines expr ';' { printf("%s\n",$2); }
        |	lines ';'
        |
        ;

expr    :   expr '+' expr {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$,$3);strcat($$,"+ ");}
        |	expr '-' expr {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$,$3);strcat($$,"- ");}
        |	expr '*' expr {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$,$3);strcat($$,"* ");}
        |	expr '/' expr {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$,$3);strcat($$,"/ ");}
        |	'-' expr %prec UMINUS { $$ = (char*)malloc(strlen($2) + 2); strcpy($$, $2); strcat($$,"-"); }
        |   '(' expr')' { $$ = $2; }
        |	NUMBER  {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$," ");}
        |   ID  {$$=(char*)malloc(50*sizeof(char));strcpy($$,$1);strcat($$," ");}
        ;




%%

// programs section

int yylex()
{
	// place your token retrieving code here

	// return getchar();

	char t;

	while (1) {
		t = getchar();
		if (t == ' ' || t == '\t' ||t == '\n'){
			;
		} 
		else if (( t >= '0' && t <= '9' )) {
			int ti=0;
			while (t >= '0' && t <= '9') {
				numStr[ti] = t;
				t = getchar();
				ti++;
			}
			numStr[ti] = '\0';
			yylval = numStr;
			ungetc(t , stdin);
			return NUMBER;
		}
		else if ((t>='a' && t<='z') || (t>='A' && t<='Z') || (t=='_')) {
			int ti=0;
			while ((t>='a' && t<='z') ||(t>='A' && t<='Z') || (t=='_') || (t>='0' && t<='9')) {
				idStr[ti]=t;
				t = getchar();
				ti++;                
			}
			idStr[ti]='\0';
			yylval = idStr;
			ungetc(t, stdin);
			return ID;
		}
		else if(t == '+'|| t == '-' || t == '*' || t == '/'||t == '('||t == ')'){
			switch (t) {
				case '+':
					return '+';
				case '-':
					return '-';
				case '*':
					return '*';
				case '/':
					return '/';
				case '(':
					return '(';
				case ')':
					return ')';
				default:
					ungetc(t , stdin);
			}
		} else{
			return t;
		}
	}
}

int main(void)
{
	yyin = stdin ;
	do {
		yyparse();
	} while (!feof(yyin));
	return 0;
}

void yyerror(const char* s)
{
	fprintf (stderr , "Parse error : %s\n", s );
	exit (1);
}