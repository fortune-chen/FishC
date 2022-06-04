#include<stdio.h>

void recursion(void)
{
	static int count = 10;
	printf("hi!\n");
	if(--count)
	{
		recursion();	
	}
}
int main()
{
	recursion();	

	
	return 0;
}
