#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n, i = 2, mu = 0;
		scanf ("%ld", &n);
		printf ("%ld = ", n);
		while (n != 1)
		{
			if (n % i == 0)
			{
				printf ("%ld^", i);
				while (n % i == 0)
				{
					n /= i;
					mu++;
				}
				printf ("%ld ", mu);
				if (n != 1) 
					printf ("* ");
			}
			else 
			{
				mu = 0;
				i++;
			}
		}
		printf ("\n");
	}
}

//3
//
//60
//
//128
//
//10000
