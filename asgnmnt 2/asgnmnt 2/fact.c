#include<stdio.h>
#include<conio.h>
int fmain()
{
	int n, i, fact = 1;
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
		fact = fact*i;
	printf("%d", fact);
	return 0;
}