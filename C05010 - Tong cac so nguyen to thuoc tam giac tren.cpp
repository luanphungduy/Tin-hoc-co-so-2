#include <stdio.h>
#include <math.h>

int checkNt (int n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) 
			return 0;
	return 1;
}

int main ()
{
	int n, sum = 0;
	scanf ("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf ("%d", &a[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i <= j && checkNt (a[i][j]))
				sum += a[i][j];
	printf ("%d", sum);
}

//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
