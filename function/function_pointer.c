#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x =  *y;
	*y = temp;	
	printf("x = %d, y = %d\n", *x, *y);
}
int main()
{
	int x = 3, y = 5;
	
	printf("x = %d, y = %d\n", x, y);
	swap(&x, &y);

	printf("x = %d, y = %d\n", x, y);
	return 0;
}
