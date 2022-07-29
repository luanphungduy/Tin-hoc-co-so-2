#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swapped = 1;
			}
		}
		if (!swapped) 
			break;
		printf ("Buoc %d: ", i + 1);
		for (int i = 0; i < n; i++)
			printf ("%d ", a[i]);
		printf ("\n");
	}
}

//4
//
//5 3 2 7
