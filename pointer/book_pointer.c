#include<stdio.h>
int main()
{
	char *cbooks[] = {
	"《C程序设计语言》",
	"《C专家编程》",
	"《C陷阱与缺陷》",
	"《C Primer Plus》",
	"《带你学C带你飞》"};

	char **byFishC;
	char **jiayuloves[5];
	int i;

	byFishC = &cbooks[4];	
	jiayuloves[0] = &cbooks[0];	
	jiayuloves[1] = &cbooks[1];	
	jiayuloves[2] = &cbooks[2];	
	jiayuloves[3] = &cbooks[3];	
	jiayuloves[4] = &cbooks[4];	
	
	printf("Fishc出版：%s\n",*byFishC);
	printf("\n");

	for(i = 0; i <5; i++)
	{
		printf("%s\n",*jiayuloves[i]);	
	}	
	return 0;
}
