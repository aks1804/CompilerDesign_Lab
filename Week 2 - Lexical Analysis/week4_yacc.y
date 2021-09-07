%{ 
   /* Definition section */
   #include<stdio.h> 
   #include<stdlib.h> 
%} 
  
%token A B C NL 
%glr-parser
  
/* Rule Section */
%% 
stmt: S NL  { printf("valid string\n"); 
              exit(0); } 
; 
S: X Y | W | {}
; 
X: A X B | {}
;
Y: C Y | {}
;
W: A W C | B W | {}
;

%% 
  
int yyerror(char *msg) 
 { 
  printf("invalid string\n"); 
  exit(0); 
 } 
  
//driver code  
main() 
 { 
  printf("enter the string\n"); 
  yyparse(); 
 } 