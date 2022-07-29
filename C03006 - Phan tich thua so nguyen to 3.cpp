#include <stdio.h>

int main ()
{
	int t, test = 1;
	scanf ("%d", &t);
	while (t--)
	{
		long n, i = 2, cnt = 0;
		scanf ("%ld", &n);
		printf ("Test %d: ", test++);
		while (n != 1)
		{
			if (n % i == 0)
			{
				while (n % i == 0)
				{	
					n /= i;
					cnt++;
				}
				printf ("%ld(%ld) ", i, cnt);
			} 
			else 
			{
				i++;
				cnt = 0;	
			}
		}
		printf ("\n");
	}
}

//3
//60
//128
//10000
