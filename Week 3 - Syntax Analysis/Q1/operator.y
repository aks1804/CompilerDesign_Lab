%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A Q M T G E N AS NL

%%

S : R M S
  | R
  | ;


R : Z Q R
  | Z T R
  | Z
  | ;

Z : X G Z
  | X AS Z
  | X
  | ;

X : N Y
  | Y
  | ;

Y : Y E A
  | A NL {printf("valid string\n");exit(0);}
  | A
%%

int yyerror(char *msg)
{
printf("invalid string\n");
exit(0);
}

int main()
{
//
// A for constant
// Q for add
// M for multiplication
// T for subtract
// G for greater
// E equal
// N fir not
// AS for assignment
printf("enter the string\n");
yyparse();
}
