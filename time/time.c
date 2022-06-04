#include<stdio.h>
#include<time.h>

#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

int main(void)
{
	struct tm *p;
	time_t t;
	
	time(&t);
	printf("时间：%d\n",t);
	p = localtime(&t);
	
	printf("时间：%d\n",p->tm_wday);
	switch(p->tm_wday)
	{
		case MON:
		case TUE:
		case WED:
		case THU:
		case FRI:

			printf("干活！\n");
			break;
		case SAT:
		case SUN:
			printf("放假！\n");
			break;
		default:
			printf("Error! \n");
	}
	return 0;
}
