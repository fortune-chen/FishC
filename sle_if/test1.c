#include<stdio.h>
int main()
{
	int i;
	printf("输入年龄：");
	scanf("%d",&i);

	if(i >= 18)
	{
		printf("你成年了\n");
	}	
	else
	{
		printf("你没有成年了\n");
	}	
	return 0;
}

