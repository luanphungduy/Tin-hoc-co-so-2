#include <stdio.h>
#include <string.h>

int check68 (char s[])
{
	if (s[6] != '6' && s[6] != '8') return 0;
	if (s[7] != '6' && s[7] != '8') return 0;
	if (s[8] != '6' && s[8] != '8') return 0;
	if (s[10] != '6' && s[10] != '8') return 0;
	if (s[11] != '6' && s[11] != '8') return 0;
	return 1;
}

int checkEqual (char s[])
{
	if (s[6] == s[7] && s[7] == s[8] && s[10] == s[11])
		return 1;
	return 0;
}

int checkIncrease(char s[])
{
	if (s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11])
		return 1;
	return 0;
}

int check (char s[])
{
	return (check68(s) || checkEqual(s) || checkIncrease(s));
}

int main ()
{
	int t;
	scanf ("%d", &t);
	scanf ("\n");
	while (t--)
	{
		// 29-T1 123.45: len = 12, check: 6 7 8.10 11
		char s[13];
		gets (s);
		if (check(s))
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//7
//29-T1 123.45
//29-T1 555.55
//29-T1 222.33
//29-T1 686.88
//29-T1 123.33
//29-T1 555.54
//29-T1 606.88
