#include <stdio.h>
#include <math.h>
	int convertBinaryToDecimal(long long n);
		int bmain()
	{
		long long n;
				scanf_s("%lld", &n);
		printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
		return 0;
	}

	int convertBinaryToDecimal(long long n)
	{
		int decimalNumber = 0, i = 0, remainder;
		while (n != 0)
		{
			remainder = n % 10;
			n /= 10;
			decimalNumber = decimalNumber+ remainder*pow(2, i);
			++i;
		}
		return decimalNumber;
	}
