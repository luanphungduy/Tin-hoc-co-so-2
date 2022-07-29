//int checkCsAndTong (long n)
//{
//	long sum = 0, tmp, ok = 0;
//	while (n)
//	{
//		tmp = n % 10;
//		if (!checkNt (tmp)) 
//			return 0;
//		sum += n % 10;
//		n /= 10;
//	}
//	return checkNt (sum);
//}

#include <stdio.h>
#include <math.h>

int checkNt (int n)
{
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int checkCs (int n)
{
	while (n)
	{
		if (!checkNt (n % 10)) 
			return 0;
		n /= 10;
	}
	return 1;
}

int checkTong (int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return checkNt (sum);
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int a, b, cnt = 0;
		scanf ("%d %d", &a, &b);
		if (a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		for (int i = a; i <= b; i++)
			if (checkCs (i) && check (i) && checkNt (i))
				cnt++;
		printf ("%d \n", cnt);
	}
}


//2
//
//23 199
//
//2345 6789


