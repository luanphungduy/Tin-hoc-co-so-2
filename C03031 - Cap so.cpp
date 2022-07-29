#include <stdio.h>

long gcd(long a, long b)
{
	long res;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	res = a;
	return res;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long a, b, c, d;
		scanf ("%ld %ld %ld %ld", &a, &b, &c, &d);
		if (gcd (a, b) == gcd (c, d))
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//2
//
//2 4 4 8
//
//3 5 7 9
