#include <stdio.h>

int checkSoGiam (long n)
{
	while (n > 10)
	{
		int x = n % 10;
		n /= 10;
		if (x >= (n % 10))
			return 0;
	}
	return 1;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long a, b, cnt = 0;
		scanf ("%ld %ld", &a, &b);
		for (int i = a; i <= b; i++)
			if (checkSoGiam (i))
				cnt++;
		printf ("%d \n", cnt);
	}
}

//1
//
//10 100
