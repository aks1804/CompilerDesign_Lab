/*Definition Section*/
%{
#include<stdio.h>
int k=0;
int o=0;
int i=0;
%}

/*Rule Section*/
%%
"while"|"if"|"else|int|float" {k++;printf("\t keywords : %s\n", yytext);}
[a-zA-Z_][a-zA-Z0-9_]* {i++;printf("\t identifier : %s\n", yytext);}
"<="|"=="|"="|"++"|"-"|"*"|"+" {o++;printf("\t operator : %s\n", yytext);}

%%
int yywrap()
{
	return 1;
}
/*Driver function*/
int main(int k,char **argcv)
{
	yyin=fopen("input.c","r"); 
	yylex();
	printf("\n total no. of keywords = %d\n", k);
	printf("\n total no. of identifiers = %d\n", i);
	printf("\n total no. of operators = %d\n", o);
	return 0;

}
