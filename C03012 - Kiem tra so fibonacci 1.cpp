#include <stdio.h>

int main ()
{
	long f[92];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 92; i++)
		f[i] = f[i-1] + f[i-2];
	long n, ok = 0;
	scanf ("%ld", &n);
	for (int i = 0; i < 92; i++)
		if (n == f[i])
		{
			ok = 1;
			break;
		}
	printf ("%ld", ok);
}

//8
