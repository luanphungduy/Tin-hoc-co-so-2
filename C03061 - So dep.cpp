#include <stdio.h>
#include <string.h>

int convert (char c)
{
	return c - '0';
}

int checkDauCuoi (char s[])
{
	int n = strlen(s);
	int dau = convert (s[0]), cuoi = convert (s[n - 1]);
	if (dau == cuoi * 2 || cuoi == dau * 2) 
		return 1;
	return 0;
}

int checkThuanNghich (char s[])
{
	int n = strlen(s); 
	for (int i = 1; i <= n / 2; i++)
		if (s[i] != s[n - 1 - i])
			return 0;
	return 1;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	scanf ("\n");
	while (t--)
	{
		char s[18];
		scanf ("%s", s);
		if (checkDauCuoi (s) && checkThuanNghich (s))
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//3
//
//36788766
//
//22345654321
//
//12345654321
