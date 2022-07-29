#include <stdio.h>
#include <math.h>

int checkNt (long long n) 
{
	for (long long i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;	
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		for (long long i = 2; i <= sqrt (n); i++)
			if (checkNt (i) && n % i == 0)
			{
				while (n % i == 0)
				{
					n /= i;
				}
			}
		printf ("%lld \n", n);
	}
}


//2
//
//315
//
//31
