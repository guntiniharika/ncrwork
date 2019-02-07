#include<stdio.h>
#include<conio.h>
int main()
{
	int n, rn = 0, rem;
	scanf_s("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		rn = rn * 10 + rem;
		n = n / 10;
	}
	printf_s("%d", rn);
	fmain();
	pmain();
	bmain();
	hmain();
	system("pause");
	return 0;
}