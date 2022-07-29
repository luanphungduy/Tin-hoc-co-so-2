#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	char ds[50][50], s[50];
	gets (s);
	for (int i = 0; i < strlen (s); i++)
		s[i] = tolower(s[i]);
	int cnt[100] = {0}, n = 0;
	char *token = strtok (s, " ");
	while (token != NULL)
	{
		strcpy (ds[n++], token);
		token = strtok (NULL, " ");
	}
	for (int i = 0; i < n; i++)
	{
		if (cnt[i] == 0)
		{
			cnt[i] = 1;
			for (int j = i + 1; j < n; j++)
			{
				if (strcmp (ds[i], ds[j]) == 0)
				{
					cnt[i]++;
					cnt[j] = -1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (cnt[i] != -1)
		{
			printf ("%s %d \n", ds[i], cnt[i]);
		}
	}
}

//aaa bbb ccc AA bb aa ccc aa
