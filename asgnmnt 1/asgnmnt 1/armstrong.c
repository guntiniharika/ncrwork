#include<stdio.h>
#include<conio.h>
int amain()
{
	int n,t,rem, sum = 0;
	scanf_s("%d", &n);
	t = n;
	while (t != 0)
	{
		rem = t % 10;
		sum = sum + (rem*rem*rem);
		t = t / 10;
	}
	if (sum == n)
		printf("armstrong number");
	return 0;
}