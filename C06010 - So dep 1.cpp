#include <stdio.h>
#include <string.h>

int check (char s[])
{
	int n = strlen (s);
	for (int i = 0; i <= n / 2; i++)
	{
		if ((s[i] - '0') % 2 == 1 || s[i] != s[n - 1 - i])
			return 0;
	}
	return 1; 
}

int main ()
{
	int t;
	scanf ("%d", &t);
	scanf ("\n");
	while (t--)
	{
		char s[501];
		gets (s);
		if (check (s))
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//4
//123456787654321
//86442824468
//8006000444422220000222244440006008
//235365789787654324567856578654356786556
