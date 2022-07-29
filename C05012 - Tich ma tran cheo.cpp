#include <stdio.h>

int main ()
{
	int t, cnt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		int a[n][n], b[n][n], c[n][n];
		// khoi tao gia tri cho ma tran A
		for (int i = 0; i < n; i++)
		{
			int value = 1;
			for (int j = 0; j < n; j++)
			{
				if (i >= j)
					a[i][j] = value++;
				else 
					a[i][j] = 0;
			}
		}
		// tao ma tran chuyen vi cua A
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				b[j][i] = a[i][j];
		}
		// nhan 2 ma tran A va chuyen vi cua A
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < n; k++)
					c[i][j] += a[i][k] * b[k][j];	
			}	
		}		
		// in ket qua
		printf ("Test %d: \n", cnt++);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				printf ("%d ", c[i][j]);
			printf ("\n");
		}		
	}
}

//1
//
//4
