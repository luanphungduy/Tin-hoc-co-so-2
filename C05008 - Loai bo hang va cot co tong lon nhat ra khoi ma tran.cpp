#include <stdio.h>

int Max(int a, int b)
{
	if (a > b) return a;
	if (b > a) return b;
}

int main ()
{
	int t, cnt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n, m;
		scanf ("%d %d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf ("%d", &a[i][j]);
		/////////////////////
		int ki_luc = 0, tong_hang, tong_cot, hang[n], cot[m], idx_hang, idx_cot;
		for (int i = 0; i < n; i++)
		{
			tong_hang = 0;
			for (int j = 0; j < m; j++)
			{
				tong_hang += a[i][j];
			}
			hang[i] = tong_hang;
			ki_luc = Max(ki_luc, tong_hang);
		}
		for (int i = 0; i < n; i++)
			if (hang[i] == ki_luc) 
			{
				idx_hang = i;
				break; 
			} /// da tim duoc chi so hang can loai bo
		/////////// 
		ki_luc = 0;
		for (int i = 0; i < m; i++)
		{
			tong_cot = 0;
			for (int j = 0; j < n; j++)
			{
				if (j != idx_hang)
				{
					tong_cot += a[j][i];
				}
				cot[i] = tong_cot;
				ki_luc = Max(ki_luc, tong_cot);
			}
		}
		for (int i = 0; i < m; i++)
			if (cot[i] == ki_luc)
			{
				idx_cot = i;
				break;
			} /// da tim duoc chi so cot can loai bo
		/////////////////////
		printf ("Test %d: \n", cnt++);
		for (int i = 0; i < n; i++)
		{
			if (i != idx_hang)
			{
				for (int j = 0; j < m; j++)
				{
					if (j != idx_cot)
					{
						printf ("%d ", a[i][j]);
					}
				}
				printf ("\n");
			}
		}
	}
}

//1
//3 3
//1 2 4
//3 4 0
//6 3 5
