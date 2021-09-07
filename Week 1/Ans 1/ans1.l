/*Definition Section*/
%{
#include<stdio.h>
%}

/*Rule Section*/
%%
\/\/(.*) {} ; // Single Line Comments

\/\*(.*\n)*.*\*\/ {}; // Multi Line Comments

[\t ' '] {}; //Leading White-spacing
%%

int yywrap()
{
return 1;
}

int main()
{
yyin=fopen("input.c","r");
yyout=fopen("input_copied.c","w");
yylex();
return 0;
}
