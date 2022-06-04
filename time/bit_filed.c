#include<stdio.h>

int main(void)
{
	struct Test
	{
		unsigned int a:1;
		unsigned int b:1;
		unsigned int c:7;
	};
	
	struct Test test;
	test.a = 1;
	test.b = 1;
	test.c = 7;
	
	printf("a = %d. b = %d, c = %d\n", test.a, test.b, test.c);
	
	printf("sizeof test = %ld\n", sizeof(test));
	return 0;
}
