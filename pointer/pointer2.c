#include<stdio.h>
int main()
{
	int a;
	int *p =&a;

	printf("输入一个整数：");
	scanf("%d",&a);
	printf("a = %d\n", a);

		
	printf("重新输入一个整数：");
	scanf("%d",p);
	printf("a = %d\n", a);

	printf("a = %d\n", *p);

	return 0;
}
