#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n); 
	int a[100], b[100], c[100], chan = 0, le = 0;
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
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[chan++] = a[i];
		else
			c[le++] = a[i];
	for (int i = 0; i < chan; i++)
		printf ("%d ", b[i]);
	for (int i = 0; i < le; i++)
		printf ("%d ", c[i]);	
}

//8
//1 3 8 2 9 7 6 5
