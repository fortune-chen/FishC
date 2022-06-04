#include<stdio.h>

void a(void);
void b(void);
void c(void);
int count;

int main(void)
{
	a();
	b();
	c();
	b();
	printf("小国今天了%d\n",count);	

	return 0;
}
