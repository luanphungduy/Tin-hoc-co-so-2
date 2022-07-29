#include <stdio.h>
#include <math.h>

int checkNt (int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		for (int i = 2; i <= n / 2; i++)
		{
			if (checkNt (i) && checkNt (n-i))
				printf ("%d %d ", i, n - i);
		}
		printf ("\n");
	}
}

//2
//6
//32
