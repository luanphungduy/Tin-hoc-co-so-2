#include <stdio.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int cnt = i + 1;
		for (int i = 0; i < cnt; i++)
			printf ("0 ");
		for (int i = 1; i <= n - cnt; i++)
		{
			printf ("%d ", i);
		}	
		printf ("\n");
	}
}

//4
