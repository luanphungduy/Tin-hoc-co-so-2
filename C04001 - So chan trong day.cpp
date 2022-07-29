#include <stdio.h>

int main () 
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) 
		{
			if (a[i] % 2 == 0)
				printf("%d ", a[i]);
		}
		printf("\n");
	}
}

//1
//5
//1 2 3 4 5
