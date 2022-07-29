#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int n, cnt = 0;
		scanf ("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] == a[i + 1])
				cnt++;
		}
		printf ("%d \n", cnt);
	}
}

//2
//
//4
//
//1  3  3  4
//
//12
//
//1  2  3  3  3  3  4  4  5  5  5  1
