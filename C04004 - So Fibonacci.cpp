#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)  
	{
		int n;
		scanf ("%d", &n);
		long long a[n];
		a[0] = 1; a[1] = 1;
		for (int i = 2; i < n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		printf ("%lld", a[n - 1]);
		printf ("\n");
	}
}

//3
//2
//5
//20
