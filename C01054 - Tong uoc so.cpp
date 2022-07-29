#include <stdio.h>
#include <math.h>

long long sum_uoc_so (int n)
{ 
	long long sum = 0; 
	for (int i = 2; i <= sqrt(n); i++)
	{ 
		if (n % i == 0)
		{ 
			while (n % i == 0)
			{ 
				sum += i; 
				n /= i; 
			} 
		} 
	} 
	if (n > 1) 
		sum += n; 
	return sum; 
}

int main ()
{
	int t; long long ans = 0;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		ans += sum_uoc_so (n);
	}
	printf ("%lld", ans);
}

//5 
//
//7
//
//9 
//
//10 
//
//13 
//
//100
