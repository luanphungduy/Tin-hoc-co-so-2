#include <stdio.h>
#include <string.h>
#include <math.h>

int checkNt (char c)
{
	return (c == '2' || c == '3' || c == '5' || c == '7');
}

int checkTn_Nt (char s[])
{
	int n = strlen (s);
	for (int i = 0; i <= n / 2; i++)
	{
		if (!checkNt (s[i])) return 0;
		if (s[i] != s[n - 1 - i]) return 0;
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
		if (checkTn_Nt (s))
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//3
//123456787654321
//235755557532
//2222333355557777235775327777555533332222
