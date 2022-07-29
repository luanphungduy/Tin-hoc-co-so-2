#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		int ok = 1;
		while (n)
		{
			int x = n % 10;
			if (x % 2 == 1)
			{
				ok = 0;
				break;
			}
			n /= 10;
		}
		if (ok) 
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//2
//
//123456
//
//22446688000000
