#include <stdio.h>

int main ()
{
	int n, a[100], b[100] = {0}, cnt = 0;
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
					if (b[i] > 1)
					{
						cnt++;
						break;
					}
				}
			}
		}
	}
	printf ("%d \n", cnt);
	for (int i = 0; i < n; i++)
	{
		if (b[i] > 1)
			printf ("%d ", a[i]);
	}
}

//7
//
//1 5 10 10 5 2 3
