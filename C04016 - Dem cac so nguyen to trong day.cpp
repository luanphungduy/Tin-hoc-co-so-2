#include <stdio.h>
#include <math.h>

int checkNt(int n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0) 
			return 0;
	return 1;
}

int main ()
{
	int t, stt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		int a[100], b[100] = {0};
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < n; i++)
		{
			int tmp;
			for (int j = i + 1; j < n; j++)
				if (a[i] > a[j])
				{
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
		}
		for (int i = 0; i < n; i++)
		{
			if (checkNt(a[i]) && b[i] == 0)
			{
				b[i] = 1;
				for (int j = i + 1; j < n; j++)
				{
					if (a[i] == a[j])
					{
						b[i]++;
						b[j] = -1;
					}
				}
			}
		}
		printf ("Test %d: \n", stt++);
		for (int i = 0; i < n; i++)
		{
			if (checkNt(a[i]) && b[i] != -1)
				printf ("%d xuat hien %d lan \n", a[i], b[i]);
		}
	}
}

//1
//
//10
//
//1 7 2 8 3 3 2 1 3 2
