#include<stdio.h>
#include<time.h>


int main(void)
{
	enum Week {SUN, MON, TUE, WED, THU, FRI, SAT};
	enum Week today;
	struct tm *p;
	time_t t;
	
	time(&t);
	printf("时间：%d\n",t);
	p = localtime(&t);
	
	today = p->tm_wday;	
	printf("时间：%d\n",p->tm_wday);
	switch(today)
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
