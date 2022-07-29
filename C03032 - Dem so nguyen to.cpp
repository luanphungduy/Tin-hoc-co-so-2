#include <stdio.h>
#include <math.h>

int checkNt (int n)
{
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int checkNtCs (int n)
{
	while (n)
	{
		int x = n % 10;
		n /= 10;
		if (!checkNt (x))
			return 0;
	}
	return 1;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int a, b, cnt = 0;
		scanf ("%d %d", &a, &b);
		for (int i = a; i <= b; i++)
			if (checkNt (i) && checkNtCs (i))
				cnt++;
		printf ("%d \n", cnt);
	}
}

//2
//
//10 100
//
//1234 5678
