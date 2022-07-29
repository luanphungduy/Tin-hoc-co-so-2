#include <stdio.h>
#include <math.h>

int check(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return n > 1;
}

int main ()
{
	int n, ki_luc = 0, idx_hang;
	scanf ("%d", &n);
	int a[n][n], b[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf ("%d", &a[i][j]);
	for (int i = 0; i < n; i++)
	{
		int so_luong_snt = 0;
		for (int j = 0; j < n; j++)
		{
			if (check (a[i][j]))
				so_luong_snt++;
		}
		if (so_luong_snt > ki_luc)
		{
			ki_luc = so_luong_snt;
			idx_hang = i;
		}
	}
	printf ("%d \n", idx_hang + 1);
	for (int i = 0; i < n; i++)
		if (check (a[idx_hang][i]))
			printf ("%d ", a[idx_hang][i]);
}

//4
//8 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
