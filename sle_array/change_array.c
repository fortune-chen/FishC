#include<stdio.h>
int main()
{
	int i,n;

	printf("输入字符的个数：");
	scanf("%d",&n);
	char a[n+1];

	printf("开始输入字符：");
	getchar();
	for(i=0;i < n;i++)
	{
		scanf("%c",&a[i]);
	}	
	a[n] = '\0';
	printf("字符串是：%s\n",a);

	//printf("字符串是：%c\n",a[0]);
	
	return 0;
}
