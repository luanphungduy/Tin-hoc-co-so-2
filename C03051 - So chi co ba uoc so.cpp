#include <stdio.h>
#include <math.h>

int check (long long n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i <= sqrt (n); i++)
	{
		if (n % i == 0)
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
		long long l, r, cnt = 0;
		scanf ("%lld %lld", &l, &r);
		long long can_l = sqrt(l), can_r = sqrt(r);
		if (can_l * can_l < l) 
			can_l++;
		for (long long i = can_l; i <= can_r; i++)
		{
			if (check(i))
				cnt++;
		}
		printf ("%lld \n", cnt);
	}
}

//2
//
//1 10
//
//1 1000000000000
