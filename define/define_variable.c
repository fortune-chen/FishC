#include<stdio.h>

#define VAR(...) printf(# __VA_ARGS__)
	

int main(void)
{
	VAR(Fish, 520, 3.14\n);
	return 0;
}
