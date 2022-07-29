#include <stdio.h>
#include <string.h>

int main ()
{
	int n, i = 0, a[100];
	scanf ("%d", &n);
	while (n / 2 != 0)
	{
		a[i++] = n % 2;
		n /= 2;
	}
	a[i++] = n % 2;
	for (int j = i - 1; j >= 0; j--)
		printf ("%d", a[j]);
}
