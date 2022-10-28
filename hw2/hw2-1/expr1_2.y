%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#define NUM 256
#ifndef YYSTYPE
#define YYSTYPE double
#endif
int yylex ();
extern int yyparse();
FILE* yyin;
void yyerror(const char* s);
%}


%token NUMBER
%left '+' '-'
%left '*' '/'
%right UMINUS

%%


lines   :	lines expr ';' { printf("%f\n", $2); }
        |	lines ';'
        |
        ;

expr    :   expr '+' expr { $$ = $1 + $3; }
        |	expr '-' expr { $$ = $1 - $3; }
        |	expr '*' expr { $$ = $1 * $3; }
        |	expr '/' expr { $$ = $1 / $3; }
        |	'(' expr')' { $$ = $2; }
        |	'-' expr %prec UMINUS { $$ = -$2; }
        |	NUMBER{$$ =$1;}
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
			//do nothing
		} 
		else if (isdigit(t)) {
			yylval=0;
			while (isdigit(t)) {
				yylval = yylval * 10 + t - '0';
				t = getchar();
			}
			ungetc(t , stdin);
			return NUMBER;
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
