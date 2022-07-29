#include <stdio.h>
#include <string.h>

int checkTongCs (char s[])
{
	int sum = 0;
	for (int i = 0; i < strlen (s); i++)
		sum += (s[i] - '0');
	return (sum % 10 == 0);
}

int checkDauCuoi (char s[])
{
	return s[0] == '8' && s[strlen(s) - 1] == '8';
}

int checkThuanNghich (char s[])
{
	for (int i = 0; i < strlen (s); i++)
		return s[i] == s[strlen(s) - 1 - i];
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
		if (checkDauCuoi (s) && checkThuanNghich (s) && checkTongCs (s))
			printf ("YES \n");
		else
			printf ("NO \n");
	}
}

//4
//123456787654321
//8644281154664511824468
//8006000444400000000000044440006008
//82123400000000000000000000000432128
