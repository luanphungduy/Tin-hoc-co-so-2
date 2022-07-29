#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n, a[100], b[100] = {0}, max = -1;
		scanf ("%d", &n);
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < n; i++)
		{
			if (b[i] == 0)
			{
				b[i] = 1;
				for (int j = i + 1; j < n; j++)
				{
					if (a[i] == a[j])
					{
						b[i]++;
						b[j] = -1;
					}
				}
			}
		}
		 
		for (int i = 0; i < n; i++)
			if (max <= b[i])
				max = b[i];
		for (int i = 0; i < n; i++)
		{
			if (b[i] == max)
				printf ("%d ", a[i]);
		}
		printf ("\n");
	}
}

//2
//
//10
//
//1 2 3 1 2 3 1 2 3 1
//
//10
//
//1 2 3 4 5 6 7 8 9 0
