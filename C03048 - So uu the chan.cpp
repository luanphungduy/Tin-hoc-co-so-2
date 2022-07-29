#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		int cnt_chan = 0, cnt_le = 0;
		if (n % 10 % 2)
		{
			printf ("NO \n");
			continue;
		}
		while (n)
		{
			int x = n % 10;
			n /= 10;
			if (x % 2 == 0)
				cnt_chan++;
			else
				cnt_le++;
		}
		if (cnt_chan > cnt_le)
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//2
//
//12345
//
//22566678800
