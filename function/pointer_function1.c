#include<stdio.h>

char *getword(char c)
{
	char str1[] = "Apple";
	char str2[] = "Banana";
	char str3[] = "Cat";
	char str4[] = "Dog";
	char str5[] = "None";

	switch(c)
	{
		case 'A': return str1;
		case 'B': return str2;
		case 'C': return str3;
		case 'D': return str4;
		default: return str5;
	}
}
int main()
{
	char input;
	
	printf("请输入一个字母：");
	scanf("%c",&input);
	printf("%s\n",getword(input));

	return 0;
}
