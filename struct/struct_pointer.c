#include<stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[128];
	char author[40];
	float price;
	struct Date date; 
	char publisher[40];
};
struct Book book = {
	"《自由》","chen",32.3, {2020, 11, 3},"usc"};

int main(void)
{
	struct Book *pt;
	pt = &book;
		
	printf("\n=======数据录入完成======\n");	
	printf("书名：%s\n", pt->title);	
	printf("作者：%s\n", pt->author);	
	printf("售价：%.2f\n", pt->price);	
	printf("出版日期：%d-%d-%d\n", pt->date.year, pt->date.month, pt->date.day);	
	printf("出版社：%s\n", pt->publisher);	
	
	return 0;
}
