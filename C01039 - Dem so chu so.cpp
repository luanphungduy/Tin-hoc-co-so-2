#include <stdio.h>

int main ()
{
	long n; 
	int cnt = 0;
	scanf ("%ld", &n);
	while (n)
	{
		n /= 10;
		cnt++;
	}
	printf ("%d", cnt);
}

//1234
