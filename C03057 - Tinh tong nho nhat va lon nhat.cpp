#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int to_int (char c) 
{
	return c - '0';	
}

long long to_min (char s[]) 
{
	long long n = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '6') s[i] = '5';
		n = n * 10 + to_int (s[i]);
	}
	return n;	
}

long long to_max (char s[]) 
{
	long long n = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '5') s[i] = '6';
		n = n * 10 + to_int (s[i]);
	}
	return n;
}

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		char a[18], b[18];
		scanf ("%s %s", a, b);
		long long max_a = to_max (a);
		long long max_b = to_max (b);
		long long min_a = to_min (a);
		long long min_b = to_min (b);
		printf ("%lld %lld \n", min_a + min_b, max_a + max_b);
	}
}

//2
//645  666
//5466 4555
