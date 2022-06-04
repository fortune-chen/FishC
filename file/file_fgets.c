#include<stdio.h>
#include<stdlib.h>

#define MAX 1024
int main(void)
{
	FILE *fp, *fp2;
	int ch;
	char buffer[MAX];

	if((fp = fopen("line.txt","w")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	
	fputs("line one: hello world!\n",fp);
	fputs("line one: hello fishc!\n",fp);
	fputs("line three: I love fishc,com!",fp);
	
	fclose(fp);

	if((fp = fopen("line.txt","r")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	while(!feof(fp))
	{
		fgets(buffer, MAX, fp);
		printf("%s", buffer);
	}		
	fclose(fp);

	putchar('\n');	
	return 0;
}
