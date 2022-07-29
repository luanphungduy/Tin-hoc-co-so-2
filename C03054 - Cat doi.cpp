//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	int t;
//	scanf ("%d", &t);
//	scanf ("\n");
//	while (t--)
//	{
//		char s[18];
//		int ok = 1;
//		scanf ("%s", s);
//		for (int i = 0; i < strlen(s); i++)
//		{
//			if (s[i] == '1') s[i] = '1';
//			else if (s[i] == '0') s[i] = '0';
//			else if (s[i] == '8') s[i] = '0';
//			else if (s[i] == '9') s[i] = '0';
//			else s[i] = 'x';
//			if (s[i] == 'x')
//			{
//				ok = 0;
//				break;
//			}
//		}
//		if (!ok) 
//		{
//			printf ("INVALID \n");
//			continue;
//		}
//		int pos; ok = 0;
//		for (int i = 0; i < strlen(s); i++)
//		{
//			if (s[i] == '1')
//			{
//				ok = 1;
//				pos = i;
//				break;
//			}
//		}
//		if (!ok) 
//		{
//			printf ("INVALID");
//			continue;
//		} 	
//		for (int i = pos; i < strlen(s); i++)
//		{
//			printf ("%c", s[i]);	
//		}
//		printf ("\n");	
//	}
//}

#include <stdio.h>
int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		long long x = 1, ok = 1, e, s = 0;
		while (n)
		{
			int d = n % 10;
			n /= 10;
			if (d != 1 && d != 0 && d != 8 && d != 9)
			{
				ok = 0;
				break;
			}
			if (d == 1) e = 1;
			if (d == 0 || d == 8 || d == 9) e = 0;
			s += e * x;
			x *= 10;
		}
		if (!ok || !s) 
			printf("INVALID \n");
		else 
			printf("%lld \n", s);
	}
}


//3
//1890
//3681
//8919
