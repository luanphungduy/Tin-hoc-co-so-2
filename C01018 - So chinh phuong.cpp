#include <stdio.h>
#include <math.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		scanf ("%ld", &n);
		long x = sqrt(n);
		if (x * x == n) 
			printf ("YES \n");
		else 
			printf ("NO \n"); 
	}
}

//3
//11
//121
//361
