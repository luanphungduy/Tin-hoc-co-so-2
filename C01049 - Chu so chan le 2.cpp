#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long n, cnt_le = 0, cnt_chan = 0;
		scanf ("%ld", &n);
		while (n)
		{
			int x = n % 10;
			if (x % 2 == 0)
				cnt_chan++;
			else 
				cnt_le++;
			n /= 10;
		}
		printf ("%d %d \n", cnt_le, cnt_chan);
	}
}

//2
//1234
//4444444
