#include <stdio.h>
#include <string.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	scanf ("\n");
	while (t--)
	{
		int cnt = 0;
		char s[201];
		gets (s);
		char *token;
		token = strtok (s, " ");
		while (token != NULL)
		{
			cnt++;
			token = strtok (NULL, " ");
		}
		printf ("%d \n", cnt);
	}
}

//2
//Lap trinh     C va C++
//ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd
