#include<stdio.h>
int main()
{
	int num = 520;
	const int cnum = 1000;
	const int *pc = &cnum;

	printf("cnum: %d, &cnum: %p\n",cnum, &cnum);
	printf("*pc: %d, pc: %p\n",*pc, pc);
	
	pc = &num;
	
	printf("num: %d, &num: %p\n",num, &num);
	printf("*pc: %d, pc: %p\n",*pc, pc);
	
	num = 1024;
	printf("*pc: %d, pc: %p\n",*pc, pc);
	
	return 0;
}
