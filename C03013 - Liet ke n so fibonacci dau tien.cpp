#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	long f[92];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 92; i++)
		f[i] = f[i-1] + f[i-2];
	for (int i = 0; i < n; i++)
		printf ("%ld ", f[i]);
}

//8
