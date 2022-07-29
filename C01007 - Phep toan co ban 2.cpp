#include <stdio.h>

int main ()
{
	long a, b;
	scanf ("%ld %ld", &a, &b);
	printf ("%ld \n", a + b);
	printf ("%ld \n", a - b);
	printf ("%ld \n", a * b);
	printf ("%ld \n", a / b);
	printf ("%ld \n", a % b);
	printf ("%.2lf", 1.0 * a / b);
}

//1 2
