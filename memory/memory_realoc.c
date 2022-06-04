#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = NULL;
	int num, i;
	int count = 0;	
	do
	{
		printf("输入一个数（-1退出）：");
		scanf("%d", &num);
		count++;
		
		ptr = (int *)realloc(ptr, count * sizeof(int));
		if(ptr == NULL)
		{
			exit(1);
		}
		ptr[count-1] = num;	
	}
	while(num != -1);
	printf("输入的数为:");
	for(i = 0; i < count; i++)
	{
		printf("%d ",ptr[i]);		
	
	}
	putchar('\n');
	free(ptr);	
	return 0;
}
