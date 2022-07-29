#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	long long f[92];
	f[0] = 0; 
	f[1] = 1;
	for (int i = 2; i < 92; i++)
		f[i] = f[i - 1] + f[i - 2];
	while (t--)
	{
		long long n, ok = 0;
		scanf ("%lld", &n);
		for (int i = 0; i < 92; i++)
			if (n == f[i])
			{
				ok = 1;
				break;
			}
		if (ok) 
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//2
//
//8
//
//15
