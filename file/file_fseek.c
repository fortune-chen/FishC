#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4

struct Stu
{
	char name[24];
	int num;
	float score;
}stu[N], sb;

int main(void)
{
	FILE *fp;
	int i;

	if((fp = fopen("score.txt","w")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	printf("输入成绩（格式）：姓名 学号 成绩\n");
	for(i = 0; i < N; i++)
	{
		scanf("%s %d %f", stu[i].name, &stu[i].num, &stu[i].score);
	}	
	fwrite(stu, sizeof(struct Stu), N, fp);
	fclose(fp);

	if((fp = fopen("score.txt","r")) ==NULL)
	{
		printf("打开文件失败\n");
		exit(EXIT_FAILURE);
	}
	
	fseek(fp, sizeof(struct Stu), SEEK_SET);
	fread(&sb, sizeof(struct Stu), 1, fp);
	printf("%s(%d)的成绩是：%.2f\n", sb.name, sb.num, sb.score);

	fclose(fp);
	return 0;
}
