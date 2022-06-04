#include<stdio.h>

int num = 1;

int recursion(int x)
{
	if(x > 0)
	{
		num = x * recursion(x - 1);	
	}
	else
	{
		num = 1;
	}
	return num;
}
int main()
{
	int x, result;
	printf("输入一个整数:");
	scanf("%d",&x);
	printf("%d\n", x);
		
	result = recursion(x);	
	printf("%d 的阶乘为：%d\n", x, result);

	
	return 0;
}
