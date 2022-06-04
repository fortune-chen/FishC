#include<stdio.h>
#include<string.h>

union Test
{
	int i;
	double pi;
	char str[20];
};

int main(void)
{
	union Test test;
	test.i = 520;
	test.pi = 3.14;
	strcpy(test.str, "FishC.com");
	
	printf("add of test.i: %p\n", &test.i);
	printf("add of test.pi: %p\n", &test.pi);
	printf("add of test.str: %p\n", &test.str);
	
	printf("test.i: %d\n", test.i);
	printf("test.i: %.2f\n", test.pi);
	printf("test.str: %s\n", test.str);
	return 0;
}
	
