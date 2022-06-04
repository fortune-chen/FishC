#include<stdio.h>

typedef int (*PTR_TO_FUN)(int , int);
PTR_TO_FUN fq,select(char);

int *funA(int num)
{
	printf("%d\t", num);
	return &num;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int calc(fq, int num1, int num2)
{
	return (fp)(num1 , num2);
}
int *select(char op)
{
	switch(op)
	{
		case '+' : return add;
		case '-' : return sub;
	}
}
int main()
{
	int num1, num2;
	char op;
	int (*fp)(int, int);
	printf("请输入式子（如1+4）：");
	scanf("%d%c%d",&num1, &op, &num2);
	fp = select(op);
	printf(" %d %c %d = %d\n", num1, op, num2, calc(fp , num1, num2));	
	
	return 0;
}
