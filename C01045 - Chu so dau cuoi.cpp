#include <stdio.h>

int main ()
{
	long n;
	scanf ("%ld", &n);
	int first, last = n % 10;
	while (n)
	{
		first = n % 10;
		n /= 10;
	}
	printf ("%d %d", first, last);
}

//1234
