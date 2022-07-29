#include <stdio.h> 
#include <string.h> 
int main () 
{ 
	char s[101], ds[100][101];
	int cnt = 0;
	gets (s);
	char *token = strtok (s, " ");
	while (token != NULL)
	{
		strcpy (ds[cnt++], token);
		token = strtok (NULL, " ");
	}
	int appear[100] = {0};
	for (int i = 0; i < cnt; i++)
		for (int j = i + 1; j < cnt; j++)
			if (strcmp (ds[i], ds[j]) == 0)
				appear[j] = 1;
	for (int i = 0; i < cnt; i++)
		if (!appear[i])
			printf ("%s ", ds[i]);
}

//mon thcs2 hoc la mon 2tc hoc
