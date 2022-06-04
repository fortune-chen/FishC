#include<stdio.h>
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int calc(int (*fp)(int , int), int num1, int num2)
{
	return (*fp)(num1 , num2);
}
int main()
{
	int a;


	printf(" 3 + 5 = %d\n", calc(add, 3, 5));	
	printf(" 3 - 5 = %d\n", calc(sub, 3, 5));	
	
	return 0;
}
