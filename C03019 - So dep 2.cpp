#include <stdio.h>

int checkThuanNghich (long long n)
{
	long long x = n, rv_n = 0;
	while (n)
	{
		rv_n = rv_n * 10 + n % 10;
		n /= 10;
	}
	return (x == rv_n);
}

int checkTongCs (long long n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return !(sum % 10);
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		long long start = 1, end, cnt = 0;
		for (int i = 1; i < n; i++)
			start *= 10;
		end = start * 10;
		for (long long i = start; i < end; i++)
		{
			if (checkThuanNghich (i) && checkTongCs (i))
				cnt++;
		}
		printf ("%d \n", cnt);
	}
}

//2
//
//2
//
//5
