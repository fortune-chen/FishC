#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(void)
{
	FILE *fp;

	if((fp = fopen("erron.txt","r")) ==NULL)
	{
	//	printf("打开文件失败,原因是：%d\n", errno);
		perror("打开文件失败,原因是：%s\n");	//只能用在文件中
		exit(EXIT_FAILURE);
	}

	fclose(fp);
	return 0;
}
