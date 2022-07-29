#include <stdio.h>

int checkReverse (long long n)
{
	long long x = n, rv_n = 0;
	while (x) 
	{
		rv_n = rv_n * 10 + x % 10;
		x /= 10;	
	}
	return rv_n == n;
}

int checkCsLe (long long n)
{
	while (n)
	{
		int x = n % 10;
		n /= 10;
		if (x % 2 == 0)
			return 0;
	}
	return 1;
}

int checkTongCsLe (long long n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum % 2);
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		if (checkReverse (n) && checkCsLe (n) && checkTongCsLe (n))
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//2
//
//131
//
//3779
