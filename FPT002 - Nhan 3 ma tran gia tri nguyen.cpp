#include <stdio.h>

void nhap (int m, int n, int arr[][10])
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf ("%d", &arr[i][j]);
}

void in (int m, int n, int arr[][10])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf ("%d ", arr[i][j]);
		printf ("\n");
	}	
}

void nhan_ma_tran(int m, int n, int p, int arr[][10], int brr[][10], int crr[][10])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			crr[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				crr[i][j] += arr[i][k] * brr[k][j];
			}
		}
	}
}

int main ()
{
	int m, n, p, q;
	scanf ("%d %d %d %d", &m, &n, &p, &q);
	int a[10][10], b[10][10], ab[10][10], c[10][10], d[10][10];
	nhap (m, n, a);
	nhap (n, p, b);	
	nhap (p, q, c);
	nhan_ma_tran (m, n, p, a, b, ab);
	nhan_ma_tran (m, p, q, ab, c, d);
	in (m, q, d);	
}

//4    3    2    2
//
//2    5    4    
//4    1    9    
//3    5    2    
//3    9    3    
//
//5    7    
//3    7    
//2    4   
// 
//7    7    
//5    4
