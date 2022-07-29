#include <stdio.h>

long gt (int i)
{
	long res = 1;
	for (int j = 1; j <= i; j++)
		res *= j;
	return res;
}

int checkStrong (long a) 
{
	long b = a, sum = 0;
	while (a) 
	{
		sum += gt(a % 10);
		a /= 10;	
	}
	return (sum == b);	
}

int main ()
{
	long n;
	scanf ("%ld", &n);
	for (long i = 1; i < n; i++)
		if (checkStrong (i))
			printf ("%ld ", i);
}

//1000
