#include<stdio.h>

int main()
{
	extern int p;
	printf("%d", p);
}

int p=34;
