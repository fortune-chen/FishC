#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	FILE *fp;

	if((fp = fopen("date.txt","w")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	printf("%ld\n", ftell(fp));
	fputc('F', fp);
	printf("%ld\n", ftell(fp));
	fputs("ishC\n", fp);
	printf("%ld\n", ftell(fp));	
	rewind(fp);
	fputs("Hello.\n", fp);
	printf("%ld\n", ftell(fp));
	

	fclose(fp);
	return 0;
}
