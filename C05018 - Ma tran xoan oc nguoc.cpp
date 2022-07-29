#include <stdio.h>

int main ()
{
	int t, cnt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n, gt, x, d = 0;
		scanf ("%d", &n);
		int a[n][n];
		gt = n * n; x = n;
		while (d <= n/2)
		{
			for (int i = d; i < x; i++) a[d][i] = gt--;
			for (int i = d + 1; i < x; i++) a[i][x - 1] = gt--;
			for (int i = x - 2; i >= d; i--) a[x - 1][i] = gt--;
			for (int i = x - 2; i > d; i--) a[i][d] = gt--;
			x--; d++;
		}
		printf ("Test %d: \n", cnt++);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				printf ("%d ", a[i][j]);
			printf ("\n");
		}
	}
}
