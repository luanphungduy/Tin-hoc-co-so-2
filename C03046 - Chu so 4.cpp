#include <stdio.h>

int check4 (int n)
{
	while (n)
	{
		if (n % 10 == 4)
			return 0;
		n /= 10;
	}
	return 1;
}

int checkRv (int n)
{
	int x = n, rv = 0;
	while (x)
	{
		rv = rv * 10 + x % 10;
		x /= 10;
	}
	return rv == n;
}

int checkTongCs (int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum % 10 == 0);
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
		end = start * 10;
		for (int i = start; i < end; i++)
			if (check4 (i) && checkRv (i) && checkTongCs (i))
				printf ("%d ", i);
		printf ("\n");
	}
}

//2
//
//2
//
//3
