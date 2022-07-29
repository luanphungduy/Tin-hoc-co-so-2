#include <stdio.h>

int main ()
{
	long n; 
	int sum = 0;
	scanf ("%ld", &n);
	while (n) 
	{
		sum += n % 10;
		n /= 10;
	}
	printf ("%d", sum);
}

//1234
