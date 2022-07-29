#include <stdio.h>

int main ()
{
	int n, min;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
			{
				int tmp = a[j];
				a[j] = a[min];
				a[min] = tmp;	
			}
		printf ("Buoc %d: ", i + 1);
		for (int i = 0; i < n; i++)
			printf ("%d ", a[i]);
		printf ("\n");
	}
}
