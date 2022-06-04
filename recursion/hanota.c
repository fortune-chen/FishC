#include<stdio.h>

int num = 0;
int hanota(int n, char x, char y, char z)
{
	num++;	
	if(n == 1)
	{
		printf("%c --> %c\n", x, z);
	}
	else
	{
		hanota(n-1, x, z, y);
		printf("%c --> %c\n", x ,z);
		hanota(n-1, y, x, z);
	}
	return num;
}
int main(void)
{
	int n, result = 0;
	printf("输入汉诺塔的层数：");
	scanf("%d",&n);

	result = hanota(n, 'X', 'Y', 'Z');

	printf("移动次数：%d\n", result);
	return 0;
}
