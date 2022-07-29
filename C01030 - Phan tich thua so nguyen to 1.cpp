#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n, i = 2;
		scanf ("%ld", &n);
		while (n != i)
		{
			if (n % i == 0)
			{
				printf ("%ld ", i);
				n /= i;
			}
			else 
				i++;
		}
		printf ("%d \n", n);
	}
}

//2
//10
//20
