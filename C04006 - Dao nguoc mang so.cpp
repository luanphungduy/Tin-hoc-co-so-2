#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n; i++)
		printf ("%d ", a[n - i - 1]);
}

//5
//1 2 3 4 5
