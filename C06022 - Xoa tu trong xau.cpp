#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main ()
//{
//	int t;
//	scanf ("%d \n", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		char s1[201], s2[21], ds1[100][21], ds2[100][21], *token;
//		gets (s1); 
//		gets (s2);
//		for (int j = 0; j < strlen (s2); j++)
//			s2[j] = tolower(s2[j]);
//		token = strtok (s1, " ");
//		int n = 0;
//		while (token != NULL)
//		{
//			strcpy (ds1[n], token);
//			for (int j = 0; j < strlen (token); j++)
//				token[j] = tolower(token[j]);
//			strcpy (ds2[n], token);
//			token = strtok (NULL, " ");
//			n++;
//		}
//		printf ("Test %d: ", i);
//		for (int j = 0; j < n; j++)
//		{
//			if (strcmp (s2, ds2[j]) != 0)
//				printf ("%s ", ds1[j]);	
//		}
//		printf ("\n");
//	}
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int t, cnt = 1;
	scanf ("%d \n", &t);
	while (t--)
	{
		char a[1000], b[1000];
		gets(a);
		gets(b);
		int m = strlen(a), n = strlen(b), i, j;
		for(i = 0; i < m; i++)
		{
			int k=1;
			while (k != 0)
			{
				if ((a[i+k-1]!=b[k-1]) && (a[i+k-1]!=b[k-1]+32) && (a[i+k-1]!=b[k-1]-32)) 
					break;
				else 
					k++;
				if(k == n + 1)
				{
					for(j = i; j < k + i; j++)
						a[j] = '\0';
					k = 0;
				}
			}
		}
		printf ("Test %d: ", cnt++);
		for(i = 0; i < m; i++)
		{
			if (a[i] != '\0') 
				printf("%c", a[i]);
		}
		printf ("\n");
	}
}


//2
//Abc ddd abdc aaa bbb abc ddD XY
//aBc
//ACHDNC XXXX YYYY ABC ABC XXXX
//XxXx

