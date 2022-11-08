#include "Type.h"
#include <sstream>

IntType TypeSystem::commonInt = IntType(4);
IntType TypeSystem::commonConstInt = IntType(4, true);
FloatType TypeSystem::commonFloat = FloatType(4);
VoidType TypeSystem::commonVoid = VoidType();

Type* TypeSystem::intType = &commonInt;
Type* TypeSystem::floatType = &commonFloat;
Type* TypeSystem::constIntType = &commonConstInt;
Type* TypeSystem::voidType = &commonVoid;

std::string IntType::toStr()
{
    if(constant)
        return "const int";
    return "int";
}

std::string FloatType::toStr()
{
    return "float";
}

std::string VoidType::toStr()
{
    return "void";
}

std::string FunctionType::toStr()
{
    std::ostringstream buffer;
    buffer << returnType->toStr() << "()";
    return buffer.str();
}
