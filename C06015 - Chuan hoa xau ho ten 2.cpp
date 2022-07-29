#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int t;
	scanf ("%d \n", &t);
	while (t--)
	{
		char s[51], ds[10][51], *token;
		gets (s);
		int n = 0;
		token = strtok (s, " ");
		while (token != NULL)
		{
			strcpy (ds[n++], token);
			token = strtok (NULL, " ");
		}
		for (int i = 1; i < n; i++)
		{
			ds[i][0] = toupper (ds[i][0]);
			int len = strlen (ds[i]);
			for (int j = 1; j < len; j++)
				ds[i][j] = tolower (ds[i][j]);
			printf ("%s", ds[i]);
			if (i != n - 1) 
				printf (" ");
		}
		for (int i = 0; i < strlen (ds[0]); i++)
			ds[0][i] = toupper (ds[0][i]);
		printf (", %s \n", ds[0]);
	}
}

//4
//    nGUYEn    quaNG   vInH  
//   tRan   thi THU    huOnG
//   nGO   quoC  VINH
// lE            tuAn    aNH
