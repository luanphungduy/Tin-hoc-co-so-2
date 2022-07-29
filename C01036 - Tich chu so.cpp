#include <stdio.h>

int main ()
{
	long n, mul = 1;
	scanf ("%ld", &n);
	while (n)
	{
		mul *= n % 10;
		n /= 10;
	}
	printf ("%ld", mul);
}

//1234
