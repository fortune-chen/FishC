#include<stdio.h>
int main()
{
	char str[128];
	int count = 0,i=0;
	printf("请输入一个字符串：");
	scanf("%s",str);
	printf("%s\n",str);

	char *target = str;

	while(*target++ != '\0')
	{
		count++;
	}	
	printf("count = %d\n",count);

	return 0;
}
