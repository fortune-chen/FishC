#include<stdio.h>
int main()
{
	printf("输入两个数：");
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("a = %d,b = %d\n",a,b);
	
	if(a != b)
	{
		if(a > b)
		{
			printf("%d > %d\n",a,b);
		}
		else
		{
			printf("%d < %d\n",a,b);
		}
	}
	else
	{
		printf("%d = %d\n",a,b);
	}
	return 0;
}
