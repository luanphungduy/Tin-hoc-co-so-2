#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[101], s2[101];
	gets (s1);
	gets (s2);
	char *token = strtok (s1, " ");
	while (token != NULL)
	{
		if (strcmp(token, s2))
			printf ("%s ", token);
		token = strtok (NULL, " ");
	}
}

//mon thcs2 la mon 2tc
//mon
