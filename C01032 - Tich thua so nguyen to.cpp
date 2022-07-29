#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n;
		scanf ("%ld", &n);
		int mul = 1, i = 2, thua_so_nt[100], stt = 0, x;
		while (n != 1)
		{
			if (n % i == 0)
			{
				thua_so_nt[stt++] = i;
				n /= i;
			}
			else 
				i++;	
		}
		x = thua_so_nt[0];
		mul *= x;
		for (int i = 1; i < stt; i++)
		{
			if (thua_so_nt[i] != x)
			{
				x = thua_so_nt[i];
				mul *= x;
			}
		}
		printf ("%d \n", mul);
	}
}

//3
//
//72
//
//1000
//
//997
