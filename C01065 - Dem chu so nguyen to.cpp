#include <stdio.h>

long long reverse(long long n)
{
	long long m = 0;
	while (n)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	return m;
}

int main ()
{
	long long n, m;
	scanf ("%lld", &n);
	m = reverse(n);
	int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
	while (n)
	{
		int x = n % 10;
		n /= 10;
		if (x == 2) c2++;
		else if (x == 3) c3++;
		else if (x == 5) c5++;
		else if (x == 7) c7++;
	}
	while (m)
	{
		int x = m % 10;
		m /= 10;
		if (x == 2 && c2 != 0) printf ("2 %d \n", c2), c2 = 0;
		if (x == 3 && c3 != 0) printf ("3 %d \n", c3), c3 = 0;
		if (x == 5 && c5 != 0) printf ("5 %d \n", c5), c5 = 0;
		if (x == 7 && c7 != 0) printf ("7 %d \n", c7), c7 = 0;
	}
}

//112345
