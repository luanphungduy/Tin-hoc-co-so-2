#include <stdio.h>

int checkTN_9 (int n)
{
	int x = n, rv_n = 0, ok = 1, tmp;
	while (n)
	{
		tmp = n % 10;
		if (tmp == 9) ok = 0;
		rv_n = rv_n * 10 + tmp;
		n /= 10;
	}
	return (rv_n == x && ok == 1);
}

int main ()
{
	int n, cnt = 0;
	scanf ("%d", &n);
	for (int i = 2; i < n; i++)
		if (checkTN_9 (i))
		{
			printf ("%d ", i);
			cnt++;
		}
	printf ("\n%d", cnt);
}

//100
