#include <stdio.h>
int main()
{
	char str[13] = "helloworlddlrowolleh";
	int len = 20;

	if(len % 2 ==0){
		printf("invalid\n");
		return 0;
	}

	for(int i=0; i<len/2; i++){
		if(str[i] != str[len-i-1]){
			printf("Not a plaindrome\n");
			return 0;
		}
	}

	printf("Is a Palindrome\n");
	return 0;
}
