#include<stdio.h>

#define R 6371
#define PI 3.1415
#define V  PI * R *R *R * 4/3

int main(void)
{
	printf("地球的体积为：%.2f\n", V);

	return 0;
}
