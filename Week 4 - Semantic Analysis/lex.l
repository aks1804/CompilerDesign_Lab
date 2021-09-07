%{
	#include "y.tab.h"
	#include<stdio.h>
%}

alpha [A-Za-z]
digit [0-9]
%%
[ \t\n]  
"switch"    return SWITCH;
"case" return CASE;
"break" return BREAK;
"default" return DEFAULT;
{digit}+    return integer_constant;
"int"   return INT;
{alpha}({alpha}|{digit})*    return ID;
("\"")[^\n\"]*("\"")    return string_constant;        

"<="    return LE;
">="    return GE;
"+="    return PE;
"=="    return EQ;
"!="    return NE;
"||"    return OR;
"&&"    return AND;
.    return yytext[0];
%%

int yywrap()
{
	return 1;
}