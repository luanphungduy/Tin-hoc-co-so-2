#include <stdio.h>

int checkTongCs (int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum % 10 == 8);
}

int checkTN_6 (int n) 
{
	int x = n, rv_n = 0, ok = 0;
	while (n) 
	{
		int tmp = n % 10;
		if (tmp == 6) ok = 1;
		rv_n = rv_n * 10 + tmp;
		n /= 10; 
	}
	return (ok == 1 && rv_n == x);	
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
		if (checkTongCs (i) && checkTN_6 (i))
			printf ("%d ", i);
}

//1 500
