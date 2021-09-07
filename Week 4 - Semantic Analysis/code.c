#include <stdio.h>

int main(){
  int var=1;
  switch(var){
    case 0:
      printf(“It’s case 0”);
      break;
    case 1:
      int a,b;
      char c;
      scanf(“%d%d”, &a, &b);
      c+=(a+b)*5;
      break;
    default:
      break;
  }
}
