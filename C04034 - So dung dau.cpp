#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		int a[n], ok;
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < n; i++)
		{
			ok = 1;
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] <= a[j])
				{
					ok = 0;
					break;
				}
			}
			if (ok) 
				printf ("%d ", a[i]);
		}
		printf ("\n");
	}
}

//1
//
//6
//
//16 17 4 3 5 2
