#include <stdio.h>
#include <math.h>

int checkNguyenTo (int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int checkThuanNghich (int n)
{
	int reverse = 0, x = n;
	while (n)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	return (reverse == x);
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int a, b, cnt = 0;
		scanf ("%d %d", &a, &b);
		for (int i = a; i <= b; i++)
		{
			if (checkNguyenTo (i) && checkThuanNghich (i))
			{
				cnt++;
				printf ("%d ", i);
			}
			if (cnt == 10) 
			{
				cnt = 0;
				printf ("\n");
			}
		}
		printf ("\n");
	}
}

//2
//
//20 1234
//
//123 140
