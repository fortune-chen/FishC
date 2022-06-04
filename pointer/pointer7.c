#include<stdio.h>
int main()
{
	char str[128];
	char count = 0,i=0;
	printf("请输入一个字符串：");
	scanf("%s",str);
	printf("%s\n",str);
	
	for(i=0;str[i] != '\0'; i++)
	{
		//printf("i = %d\n",i);
	}	
	printf("count = %d\n",i);

	return 0;
}
