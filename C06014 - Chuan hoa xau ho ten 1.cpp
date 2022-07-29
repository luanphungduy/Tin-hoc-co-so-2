#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int t;
	scanf ("%d \n", &t);
	while (t--)
	{
		char s[81], ds[10][10];
		gets (s);
		int n = 0;
		char *token = strtok (s, " ");
		while (token != NULL)
		{
			strcpy (ds[n++], token);
			token = strtok (NULL, " ");
		}
		for (int i = 0; i < n; i++)
		{
			int len = strlen (ds[i]);
			ds[i][0] = toupper (ds[i][0]);
			for (int j = 1; j < len; j++)
				ds[i][j] = tolower (ds[i][j]);
			printf ("%s ", ds[i]);
		}
		printf ("\n");
	}
}

//3
//   nGuYEN    vAN    naM
//tRan           TRUNG hiEU
//      vO le         hOA bINh
