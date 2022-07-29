#include <stdio.h>

int main ()
{
	int n, m, a[100];
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	scanf ("%d", &m);
	for (int i = n - m; i < n; i++)
		printf ("%d ", a[i]);
	for (int i = 0; i < n - m; i++)
		printf ("%d ", a[i]);
}

//10
//
//1 2 3 4 5 6 7 8 9 10
//
//3
