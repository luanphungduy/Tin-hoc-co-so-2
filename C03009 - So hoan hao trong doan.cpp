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
	int a, b;
	scanf ("%d %d", &a, &b);
	if (a > b) 
	{
		int tmp = a;
		a = b;
		b = tmp;	
	}
	for (int i = a; i <= b; i++)
	{
		if (checkPerfect (i))
			printf ("%d ", i);
	}
}

//1 1000

