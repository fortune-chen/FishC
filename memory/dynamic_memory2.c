#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = NULL;
	int num, i;

	printf("请输入个数：");	
	scanf("%d",&num);

	ptr = (int *) malloc(num * sizeof(int));	

	for(i = 0; i < num; i++)
	{	
	
		printf("第%d个数：", i+1);	
		scanf("%d",&ptr[i]);
	}
	printf("输入数据为：");	
	for(i = 0; i < num; i++)
	{	
		printf(" %d ",ptr[i]);	
	}
	putchar('\n');
	free(ptr);	
	return 0;
}
