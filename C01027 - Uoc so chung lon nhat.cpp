#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int a, b;
		scanf ("%d %d", &a, &b);
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		printf ("%d \n", a);
	}
}

//2
//24 14
//75 125
