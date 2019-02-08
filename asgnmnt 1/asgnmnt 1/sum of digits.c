#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t, sum = 0,rem;
	scanf_s("%d", &n);
	t = n;
	while (t != 0)
	{
		rem = t % 10;
		sum = sum + rem;
		t = t / 10;
	}
	printf("%d", sum);
	pmain();
	amain();
	tmain();
	smain();
	mmain();
	system("pause");
	return 0;
}