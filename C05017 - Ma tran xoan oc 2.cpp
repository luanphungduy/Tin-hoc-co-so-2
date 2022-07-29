#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n, m, d = 0, hang, cot, cnt = 0, dung_lai = 0;
		scanf ("%d %d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf ("%d", &a[i][j]);
		hang = n, cot = m;
		while (d <= n / 2)
		{	
			if (dung_lai == 1) break;
			for (int i = d; i < cot; i++)
			{
				printf ("%d ", a[d][i]);
				cnt++;
				if (cnt == n * m)
					dung_lai = 1;
			}
			if (dung_lai == 1) break;
			for (int i = d + 1; i < hang; i++)
			{
				printf ("%d ", a[i][cot - 1]);
				cnt++;
				if (cnt == n * m)
					dung_lai = 1;
			}
			if (dung_lai == 1) break;
			for (int i = cot - 2; i >= d; i--)
			{
				printf ("%d ", a[hang - 1][i]);
				cnt++;
				if (cnt == n * m)
					dung_lai = 1;
			}
			if (dung_lai == 1) break;
			for (int i = hang - 2; i > d; i--)
			{
				printf ("%d ", a[i][d]);
				cnt++;
				if (cnt == n * m)
					dung_lai = 1;
			}
			d++, hang--, cot--;
		}
		printf ("\n");
	}
}

//2
//4 4
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//3 4
//1 2 3 4 5 6 7 8 9 10 11 12

