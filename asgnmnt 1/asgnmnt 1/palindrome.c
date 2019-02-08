#include<stdio.h>
#include<conio.h>
int pmain()
{
	int n, t, rn = 0, rem;
	scanf_s("%d", &n);
	t = n;
	while (t != 0)
	{
		rem = t % 10;
		rn = rn * 10 + rem;
		t = t / 10;
	}
	if (n == rn)
	{
		printf("palindrome");
	}
	system("pause");
	return 0;
}
