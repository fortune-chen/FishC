#include<stdio.h>
int square(int num)
{
	return num * num;
}

int main()
{
	int num;
	int (*fq)(int);
	printf("输入一个整数：");
	scanf("%d",&num);
	fq = square;
	printf("%d\n",(*fq)(num));
	
	return 0;
}
