#include <stdio.h>

int main ()
{
	int n, i = 2;
	scanf ("%d", &n);
	while (n != i) 
	{
		if (n % i == 0) 
		{
			n /= i;
			printf ("%dx", i);	
		}
		else 
			i++;
	}
	printf ("%d", n);
}
