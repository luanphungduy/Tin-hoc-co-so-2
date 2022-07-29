#include <stdio.h>

int gt (int i)
{
	int res = 1;
	for (int j = 1; j <= i; j++)
		res *= j;
	return res;
}

int checkStrong (int a) 
{
	int b = a, sum = 0;
	while (a) 
	{
		sum += gt(a % 10);
		a /= 10;	
	}
	return (sum == b);	
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
		if (checkStrong (i))
			printf ("%d ", i);
}

//1 1000
