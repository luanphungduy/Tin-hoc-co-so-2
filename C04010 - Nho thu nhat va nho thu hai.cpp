#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	// Sort
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] >= a[j]) 
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf ("%d ", a[0]);
	for (int i = 1; i < n; i++)
		if (a[i] != a[0])
		{
			printf ("%d", a[i]);
			break;
		}
}

//6
//80 23 79 58 11 10
