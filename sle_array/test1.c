#include<stdio.h>
#define NUM 10
int main()
{
	int s[NUM];
	int i,sum=0;
	for(i=0;i < 10;i++)
	{
		printf("输入第%i位同学的成绩：",i + 1);
		scanf("%d",&s[i]);
		sum += s[i];
	}	
	printf("平均成绩：%.2f\n",(double)sum / NUM);
	
	return 0;
}
