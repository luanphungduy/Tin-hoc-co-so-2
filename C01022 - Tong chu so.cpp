#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		scanf ("%ld", &n);
		int sum = 0;
		while (n)
		{
			sum += n % 10;
			n /= 10;	
		}
		printf ("%d \n", sum);	
	}
}

//1
//1234
