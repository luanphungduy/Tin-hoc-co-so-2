#include <stdio.h>

int main ()
{
	long a, b;
	scanf ("%ld %ld", &a, &b);
	long long ucln, bcnn = a * b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else 	
			b -= a;
	}
	ucln = a;
	bcnn /= ucln;
	printf ("%lld \n%lld", ucln, bcnn);
}

//2 5
