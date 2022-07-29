#include <stdio.h>
#include <math.h>

int check (long long n)
{
	for (long long i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return n > 1; 
}

int main ()
{
	int n, cnt = 0;  long long i = 2;
	scanf ("%d", &n);
	while (cnt < n)
	{
		if (check (i))
		{
			printf ("%d \n", i);
			cnt++;
		}
		i++;
	}
}

//5
