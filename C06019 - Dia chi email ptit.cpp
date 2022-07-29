#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	char s[51], ds[10][51];
	gets (s);
	char *token = strtok (s, " ");
	int n = 0;
	while (token != NULL)
	{
		strcpy (ds[n++], token);
		token = strtok (NULL, " ");
	}
	for (int i = 0; i < strlen (ds[n-1]); i++)
		ds[n-1][i] = tolower (ds[n-1][i]);
	for (int i = 0; i < n - 1; i++)
		printf ("%c", tolower(ds[i][0]));
	printf ("%s@ptit.edu.vn", ds[n-1]);
}

//ngUYEN van nam
