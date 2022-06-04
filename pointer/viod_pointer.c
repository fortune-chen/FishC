#include<stdio.h>

int main()
{
	int num = 1024;
	int *pi = &num;
	char *ps = "FishC";
	void *pv;

	pv = pi;
	printf("pi: %p, pv: %p\n",pi,pv);
	printf("pv: %d\n",*(int *)pv);//打印pv的值

	pv = ps;
	printf("ps: %p, pv: %p\n",ps,pv);
	printf("pv: %s\n",(char *)pv);//打印pv的值.打印字符串取值符号*
		

	return 0;
}
