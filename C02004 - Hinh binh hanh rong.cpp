#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int x = n - 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= x; j++)
			printf ("~");
		x--;
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
				printf ("*");
			else
				printf (".");
		}
		printf ("\n");
	}
}
