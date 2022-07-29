#include <stdio.h>

int ktkg(int n)
{
	while (n)
	{
		int x = n % 10;
		n /= 10;
		if (n % 10 > x)
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
		int n, start = 1, end;
		scanf ("%d", &n);
		for (int i = 1; i < n; i++)
			start *= 10;
		end = start * 10 - 1;
		for (int i = start; i <= end; i++)
		{
			if (ktkg(i))
				printf ("%d ", i);
		}
		printf ("\n");
	}
}

//1
//
//2
