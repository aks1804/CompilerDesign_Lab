#include <stdio.h>
int main()
{
	char str[13] = "hello545olleh";
	int len = 13;
	int i;
	if(len % 2 ==0)
	{
		printf("invalid\n");
		return 0;
	}
	for(i=0; i<len/2; i++)
	{
		if(str[i] != str[len-i-1])
		{
			printf("invalid\n");
			return 0;
		}
	}
	printf("valid\n");
	return 0;
}
