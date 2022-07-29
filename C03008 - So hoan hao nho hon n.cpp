#include <stdio.h>

int checkPerfect (int n)
{
	int a[] = {6, 28, 496, 8128};
	for (int i = 0; i < 4; i++)
	{
		if (n == a[i])
			return 1;
	}
	return 0;
}

int main ()
{
	int n;
	scanf ("%d", &n);
	for (int i = 6; i < n; i++)
	{
		if (checkPerfect (i))
			printf ("%d ", i);
	}
}

//1000

