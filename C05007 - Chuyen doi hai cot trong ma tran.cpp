#include <stdio.h>

int main ()
{
	int n, m, a, b;
	scanf ("%d %d", &n, &m);
	int arr[n+1][m+1];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf ("%d", &arr[i][j]);
	scanf ("%d %d", &a, &b);
	for (int i = 1; i <= n; i++)
		{
			int tmp = arr[i][a];
			arr[i][a] = arr[i][b];
			arr[i][b] = tmp;
		}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf ("%d ", arr[i][j]);
		printf ("\n");
	}
}

//3 3
//1 2 3
//4 5 6
//7 8 9
//1 3

//3 5
//1 2 3 4 5
//4 5 6 7 8
//9 7 5 3 1
//1 4
