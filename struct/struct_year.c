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

int main(void)
{
	struct Book book = {
	"《自由》","chen",32.3, {2020, 11, 3},"usc"};
	
	printf("\n=======数据录入完成======\n");	
	printf("书名：%s\n", book.title);	
	printf("作者：%s\n", book.author);	
	printf("售价：%.2f\n", book.price);	
	printf("出版日期：%d-%d-%d\n", book.date.year, book.date.month, book.date.day);	
	printf("出版社：%s\n", book.publisher);	
	
	return 0;
}
