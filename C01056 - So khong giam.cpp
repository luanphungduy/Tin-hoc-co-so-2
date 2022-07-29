#include <stdio.h>
#include <string.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	scanf ("\n");
	while (t--)
	{
		int ok = 1;
		char s[18];
		scanf ("%s", s);
		int n = strlen(s);
		for (int i = n - 1; i >= 1; i--) 
		{
			if (s[i] < s[i - 1])
			{
				ok = 0;
				break;
			}
		}
		if (ok == 1)
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//2
//1234567890676543
//11223334445555689
