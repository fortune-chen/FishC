#include<stdio.h>
int main()
{
	int a=1;
	char b='x';
	float c=0.3;
	double d=4.99;
	int x,y,z,n;
	x = sizeof(a);
	
	y = sizeof(b);
	z = sizeof(c);
	n = sizeof(d);
	printf("输出结果：%d,%d,%d,%d",x,y,z,n);
	return 0;
}
