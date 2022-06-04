#include<stdio.h>
int main()
{
	int num = 520;
	const int cnum = 1000;
	const int * const pc = &num;
	
	printf("num: %d, &num: %p\n",num, &num);
	*pc = 1024;
	printf("num: %d, &num: %p\n",num, &num);
	printf("*pc: %d, pc: %p\n",*pc, pc);
	
	
	num = 2000;
	printf("*pc: %d, pc: %p\n",*pc, pc);
	
	return 0;
}
