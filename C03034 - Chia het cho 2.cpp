#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		int count = 0;
		scanf ("%ld", &n);
		for (long i = 1; i <= sqrt(n);i++)
		{
			if (n % i == 0)
			{
				if ( i % 2 == 0) 
					count++;
				if ( n / i % 2 == 0 && n / i != i) 
					count++;
			}
		}
		printf ("%d \n", count);
	}
}

//2
//
//9
//
//8
