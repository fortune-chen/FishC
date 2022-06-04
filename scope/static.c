#include<stdio.h>

void func(void)
{
	int count = 0;
	printf("count = %d\n",count);
	count ++;
}

int main(void)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		func();
	}
	
	return 0;
}
