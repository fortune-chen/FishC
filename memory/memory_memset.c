#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

int main()
{
	int *ptr = NULL;
	int num, i;

	ptr = (int *) malloc(N * sizeof(int));	
	if(ptr == NULL)
	{
		exit(1);
	}
	memset(ptr, 1, N * sizeof(int));
	ptr[2] = 22;
	
	for(i = 0; i < N; i++)
	{	
		printf(" %d ",ptr[i]);	
	}
	putchar('\n');
	free(ptr);	
	return 0;
}
