#include <stdio.h>

int tongCs (long n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int tongCsThuaSoNt (long n)
{
	int sum = 0, i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				sum += tongCs (i);
				n /= i;
			}
		}
		else 
			i++;
	}
	return sum;
}

int main ()
{
	long n;
	scanf ("%ld", &n);
	if (tongCs (n) == tongCsThuaSoNt (n))
		printf ("YES \n");
	else
		printf ("NO \n");
}

//378
//120
