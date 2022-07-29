#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		int cnt_chan = 0, cnt_le = 0;
		scanf ("%lld", &n);
		if (!n % 10 % 2)
		{
			printf ("NO \n");
			continue;
		}
		while (n)
		{
			int x = n % 10;
			n /= 10;
			if (x % 2)
				cnt_le++;
			else
				cnt_chan++;
		}
		if (cnt_le > cnt_chan)
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//2
//
//12345
//
//22566678801
