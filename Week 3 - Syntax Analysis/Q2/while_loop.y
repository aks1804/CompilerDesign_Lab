%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM WHILE BEG END NL LE GE EQ NE OR AND
%right '='
%left AND OR
%left '<' '>' LE GE EQ NE
%left '+''-'
%left '*''/'
%right UMINUS
%left '!'
%%
S	: ST1 {printf("Valid input\n");exit(0);};
ST1	: WHILE '(' CONDITION ')' NL BEG NL ST NL END
ST      : EXP NL ST
          | EXP ';'
          ;
EXP       : ID '=' EXP
          | EXP '+' EXP
          | EXP '-' EXP
          | EXP '*' EXP
          | EXP '/' EXP
          | EXP '<' EXP
          | EXP '>' EXP
          | EXP LE EXP
          | EXP GE EXP
          | EXP EQ EXP
          | EXP NE EXP
          | EXP OR EXP
          | EXP AND EXP
          | ID
          | NUM
          ;
CONDITION: EXP '<' EXP
          | EXP '>' EXP
          | EXP LE EXP
          | EXP GE EXP
          | EXP EQ EXP
          | EXP NE EXP
          | EXP OR EXP
          | EXP AND EXP
          | ID
          | NUM
          ;

%%

int yyerror(char *msg)
{
  printf("Invalid input\n");
  exit(0);
}
main()
{
	extern FILE *yyin;
	yyin = fopen("test1.c", "r");
	yyparse();
}
