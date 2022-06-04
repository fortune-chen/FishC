#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *) malloc(sizeof(int));	
	if(ptr == NULL)
	{
		printf("分配地址失败！\n");
		exit(1);
	}	

	printf("请输入一个整数：");	
	scanf("%d",ptr);
	
	printf("输出为：%d\n",*ptr);	
	free(ptr);
	printf("输出为：%d\n",*ptr);			
	return 0;
}
