#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		scanf ("%ld", &n);
		int start, end = n % 10;
		while (n) 
		{
			start = n % 10;
			n /= 10;	
		}
		if (start == end)
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//2
//12451
//1000012
