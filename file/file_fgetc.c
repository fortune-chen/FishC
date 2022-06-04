#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	int ch;

	if((fp1 = fopen("hello.txt","r")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	if((fp2 = fopen("fishc.txt","w")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	
	while((ch = getc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}		
	fclose(fp1);
	fclose(fp2);
	return 0;
}
