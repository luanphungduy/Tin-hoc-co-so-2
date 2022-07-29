#include <stdio.h>

int tong_cs (int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	if (tong_cs (a) <= tong_cs (b))
		printf ("%d %d", a, b);
	else 
		printf ("%d %d", b, a);
}

//99 1111
