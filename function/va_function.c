#include<stdio.h>
#include<stdarg.h>
int sum(int n, ...)
{
	int i, sum = 0;
	va_list vap;
	va_start(vap, n);
	for(i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);
	}
	va_end(vap);
	return sum;
}
int main()
{
	int result;
	result = sum(3, 1, 2, 3);
	printf("result1 = %d\n",result);


	result = sum(5, 2, 3, 3, 2, 4);
	printf("result2 = %d\n",result);
	
	return 0;
}
