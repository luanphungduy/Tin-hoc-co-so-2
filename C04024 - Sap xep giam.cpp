#include <stdio.h>

int main ()
{
	int n, a[100];
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf ("%d ", a[i]);
}

//8
//
//1 3 8 2 9 7 6 5
