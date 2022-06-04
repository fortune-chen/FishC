#include<stdio.h>
int main()
{
	int array[3][4] = {
	{0, 1, 2, 3},
	{4, 5, 6, 7},
	{8, 9, 10, 11}};
	int (*p)[4] = array;
	int i, j;

	//printf("p :%p, array: %p\n",p,array);	
	//phrintf("p+1 :%p, array+2: %p\n",p+3,array+1);	

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			{
				printf("%2d ",*(*(array+i)+j));
			}
	printf("\n");
	}
	
	
	return 0;
}
