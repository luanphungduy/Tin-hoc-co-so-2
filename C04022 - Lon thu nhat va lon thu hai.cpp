#include <stdio.h>

int main ()
{
	int n, a[100], max_1st, max_2nd;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	max_1st = a[n - 1];
	for (int i = n - 1; i > 0; i--)
		if (a[i] > a[i - 1])
		{
			max_2nd = a[i - 1];
			break;
		}	
	printf ("%d %d", max_1st, max_2nd);
}

//6
//
//80 23 79 58 11 10
