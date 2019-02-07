#include<stdio.h>
#include<conio.h>
int hmain()
{
		long int decnum, rem, quot;
	int i = 1, j, temp;
	char hexdecnum[100];
		scanf_s("%ld", &decnum);
	quot = decnum;
	while (quot != 0)
	{
		temp = quot % 16;
				if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdecnum[i++] = temp;
		quot = quot / 16;
	}
	printf("Equivalent hexadecimal value of %d is :\n", decnum);
	for (j = i - 1; j>0; j--)
	{
		printf("%c", hexdecnum[j]);
	}
	system("pause");
	return 0;
}