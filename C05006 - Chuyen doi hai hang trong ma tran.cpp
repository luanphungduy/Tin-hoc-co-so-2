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
	for (int i = 1; i <= m; i++)
		//swap(arr[a][i], arr[b][i]);
		{
			int tmp = arr[a][i];
			arr[a][i] = arr[b][i];
			arr[b][i] = tmp;
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
