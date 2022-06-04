#include<stdio.h>
int main(int argc,char **argv)
{
	int sum,i;
	for(i=0;i<10;i++)
	{
		sum = sum + i;
	}
	printf("sum = %d\n",sum);
	return 0;
}
