#include<stdio.h>
int sum2(int n)
{
	int result;
	do
	{
		result += n;
	}while(n-- > 0);
	return result;
}
int sum(int n)
{
	int result = 0,i = 0;
	for(i = 0; i <= n; i++)
	{
		result += i;	
	}	
	return result;
}
int main()
{
	int n;
	printf("输入一个整数：");
	scanf("%d",&n);	

	printf(" %d\n", sum2(n));	
	
	return 0;
}
