#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[100], b[100] = {0};
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
	{
		if (b[i] != -1)
		{
			printf ("%d %d \n", a[i], b[i]);
		}
	}
}

//7
//
//2 3 3 2 1 9 5
