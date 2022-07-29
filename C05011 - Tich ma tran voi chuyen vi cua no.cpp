#include <stdio.h>

int main ()
{
	int t, cnt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n, m;
		scanf ("%d %d", &n, &m);
		int a[n][m], aT[m][n], mul[n][n];
		// nhap mang a
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf ("%d", &a[i][j]);
		// tim ma tran chuyen vi aT
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				aT[j][i] = a[i][j];			
		// tim ma tran tich mul
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				mul[i][j] = 0;
				for (int k = 0; k < m; k++)
					mul[i][j] += a[i][k] * aT[k][j];
			}
		// in ket qua
		printf ("Test %d: \n", cnt++);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				printf ("%d ", mul[i][j]);
			printf ("\n");
		}		
	}
}

//2
//3 3
//1 2 3
//4 5 6
//7 8 9
//2  2
//1  2
//3  4
