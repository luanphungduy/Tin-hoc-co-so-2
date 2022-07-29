#include <stdio.h>
#include <math.h>

int checkNt (int n)
{
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int checkTongCs (int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum % 5 == 0);
}

int main ()
{
	int n, cnt = 0;
	scanf ("%d", &n);
	for (int i = 2; i < n; i++)
		if (checkNt (i) && checkTongCs (i))
		{
			printf ("%d ", i);
			cnt++;
		}
	printf ("\n%d", cnt);
}

//100
