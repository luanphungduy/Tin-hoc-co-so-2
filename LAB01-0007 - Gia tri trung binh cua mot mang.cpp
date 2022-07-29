#include <stdio.h>

int main ()
{
	int n, a[100], sum = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)	
		scanf ("%d", &a[i]);
	for (int i = 0; i < n; i++)
		sum += a[i];
	printf ("%.3f", 1.0 * sum / n);
}

//4
//
//2  4   1  2
