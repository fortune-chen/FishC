#include<stdio.h>
int main()
{
	int num = 520;
	int *p = &num;
	int **pp = &p;

	printf("*p:%d\n",*p);	
	printf("**pp:%d\n",**pp);	

	printf("&p:%p\n, pp:%p\n",&p, pp);	
	printf("&num:%p\n, p: %p\n, *pp: %p\n",&num, p, *pp);	
	return 0;
}
