#include <stdio.h>

int main () 
{
	int n, m, pos;
	scanf ("%d %d", &n, &m);
	int a[n], b[m];
	for (int i = 0 ; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf ("%d", &b[i]);
	scanf ("%d", &pos);
	for (int i = 0; i < pos; i++)
		printf ("%d ", a[i]);
	for (int i = 0; i < m; i++) 
		printf ("%d ", b[i]);
	for (int i = pos; i < n; i++)
		printf ("%d ", a[i]);
}

//5 3
//1 2 3 4 5
//6 7 8
//3
