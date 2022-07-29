#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long a, b;
		scanf ("%ld %ld", &a, &b);
		long long bcnn = a * b, ucln;
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		ucln = a;
		bcnn /= ucln;
		printf ("%ld %ld \n", bcnn, ucln);
	}
}

//2
//
//5 10
//
//14 8
