%{
#include <stdio.h>
#include <stdlib.h>
%}
%token INT CHAR ID integer_constant string_constant SWITCH CASE DEFAULT BREAK LE GE EQ NE OR AND ELSE
%right PE
%right '='
%left AND OR
%left '<' '>' LE GE EQ NE
%left '+''-'
%left '*''/'
%right UMINUS
%left '!'
%%

S       : ST {printf("Input accepted.\n");exit(0);}
         ;

ST     :   INT ID '=' constant ';' switch
        ;
    
switch  :  SWITCH '(' ID ')' '{' B '}'
         ;
   
B       :    C
         |    C    D
        ;
   
C      :    C    C
        |   CASE constant ':' statements ';'
        |   BREAK ';'
        ;

D      :    DEFAULT ':' statements ';' BREAK ';'
        ;
    
statements  :   statement statements E 
            |   E
            ;

statement   :   INT ID
            |   CHAR ID
            |   ID '(' constant ')'
            ;

E    : ID'='E
    | E'+'E
    | E'-'E
    | E'*'E
    | E PE E
    | '(' E ')'
    | E'/'E
    | E'<'E
    | E'>'E
    | E LE E
    | E GE E
    | E EQ E
    | E NE E
    | E OR E
    | E AND E
    | ID
    | constant
    |
    ;

constant 
			: integer_constant 	{  $$=1; } 
			| string_constant	{  $$=-1;} 

%%

int yyerror(char *msg) 
{ 
  printf("Invalid\n"); 
  exit(0); 
}

main()
{
printf("Enter the exp: ");
yyparse();
}
