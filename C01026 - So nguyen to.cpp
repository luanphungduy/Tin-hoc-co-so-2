#include <stdio.h>
#include <math.h>

int ktnt (long n)
{
	if (n < 2)
		return 0;
	for (long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) 
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
		long n;
		scanf ("%ld", &n);
		if (ktnt(n))
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//3
//123456
//997
//111111111
