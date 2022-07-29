#include <stdio.h>

int main ()
{
	int m;
	scanf ("%d", &m);
	int a[m][m];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			scanf ("%d", &a[i][j]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{	
				int tmp = a[i][j];
				a[i][j] = a[i][m-1-j];
				a[i][m-1-j] = tmp;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			printf ("%d ", a[i][j]);
		printf ("\n");
	}			
}

//3
//1 2 3
//4 5 6
//7 8 9

//4
//1 2 5 6
//3 5 4 7
//8 6 4 2
//0 2 6 7

