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
		int pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[pos])
				pos = j;
		}
		int tmp = a[i];
		a[i] = a[pos];
		a[pos] = tmp;
		for (int i = 0; i < n; i++)
			printf ("%d ", a[i]);
		printf ("\n");
	}
}

//5
//64 25 12 22 11
