#include <stdio.h>
#include <math.h>

int check_nt (int n)
{
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int tong_cs (int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main ()
{
	long f[92];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 92; i++)
		f[i] = f[i-1] + f[i-2];
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
		if (check_nt (i))
		{
			for (int j = 0; j < 92; j++)
				if (f[j] == tong_cs (i))
				{
					printf ("%d ", i);
					break;
				}
		}
	}
}

//2 50
