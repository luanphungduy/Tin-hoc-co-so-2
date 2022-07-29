#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--) 
	{
		int n, max = -1e3;
		scanf ("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= max)
				max = a[i];
		}
		printf ("%d \n", max);
		for (int i = 0; i < n; i++)
			if (a[i] == max) 
				printf ("%d ", i);
		printf ("\n");
	}
}

//1
//7
//3 5 9 8 4 2 9
