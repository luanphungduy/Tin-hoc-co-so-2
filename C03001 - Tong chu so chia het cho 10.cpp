#include <stdio.h>

int tong_cs(long n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		scanf ("%d", &n);
		int sum = tong_cs(n);
		if (sum % 10 == 0)
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//3
//
//3333
//
//555555
//
//123455
