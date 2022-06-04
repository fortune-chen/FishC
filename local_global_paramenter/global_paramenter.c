#include<stdio.h>
int a, b = 520;
void func()
{
	int b;

	a = 880;

	b = 120;
	printf(" func,a = %d, b = %d\n", a, b);
}
int main()
{

	printf(" main ,a = %d, b = %d\n", a, b);
	func();	

	printf(" main ,a = %d, b = %d\n", a, b);
	return 0;
}
