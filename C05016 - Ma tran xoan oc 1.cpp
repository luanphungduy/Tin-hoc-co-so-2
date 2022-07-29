#include <stdio.h>

int main ()
{
	int n, cnt = 1, d = 0;
	scanf ("%d", &n);
	int a[n][n];
	int x = n;
	while (cnt <= n * n)
	{
		for (int i = d; i < x; i++) 
			a[d][i] = cnt++; 
		for (int i = d + 1; i < x; i++) 
			a[i][x - 1] = cnt++;	
		for (int i = x - 2; i >= d; i--) 
			a[x - 1][i] = cnt++;	
		for (int i = x - 2; i > d; i--)
			a[i][d] = cnt++;
		d++; x--;	
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf ("%d ", a[i][j]);
		printf ("\n");
	}
}

//5
