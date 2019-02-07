#include<stdio.h>
#include<conio.h>
int pmain()
{
	int m, n,i, flag;
	scanf_s("%d %d", &m,&n);
	//scanf_s("%d", &n);
	while (m <= n)
	{
		flag = 0;
		for (i = 2; i < m ; i++)
		{
			if (m%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d", m);
		++m;
	}
	system("pause");
	return 0;
}