#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkValid (char s[])
{
	if (s[0] == '0')
		return 0;
	for (int i = 0; i < strlen (s); i++)
		if (!isdigit (s[i])) 
			return 0;
	return 1;
}

int checkUuThe (char s[])
{
	int n = strlen (s), le = 0, chan = 0;
	for (int i = 0; i < n; i++)
		if ((s[i] - '0') % 2 == 0) 
			chan++;
		else 
			le++;
	return (chan > le && n % 2 == 0 || le > chan && n % 2 == 1); 
}

int main ()
{
	int t;
	scanf ("%d \n", &t);
	while (t--)
	{
		char s[1001];
		scanf ("%s", &s);
		if (!checkValid (s))
			printf ("INVALID \n");
		else if (checkUuThe (s))
			printf ("YES \n");
		else 
			printf ("NO \n");	
	}
}

//3
//01234aa32432432432534545b987978
//1234567890123456789000
//999999999999999999999999999999
