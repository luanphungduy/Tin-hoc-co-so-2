#include <stdio.h>
#include <math.h>

int ktnt(int x) 
{
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++) 
	{
		if (x % i == 0) return 0;
	}
	return 1;
}

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
			if (ktnt(a[i]))
				printf("%d ", a[i]);
		}
		printf("\n");
	}
}

//1
//5
//1 2 3 4 5
