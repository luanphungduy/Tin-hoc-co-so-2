#include <stdio.h>
#include <string.h>

int check (char s1[], char s2[])
{
	int n1 = strlen (s1), n2 = strlen (s2);
	if (n1 > n2 || n1 == n2 && strcmp (s1, s2) > 0)
		return 1;
	return 0;
}

void reverse (int a[], int n)
{
	int l = 0, r = n - 1;
	while (l < r)
	{
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++; r--;
	}
}

void tinhHieu (char s1[], char s2[])
{
	int n1 = strlen (s1), n2 = strlen (s2), nho = 0, n = 0, idx = -1;
	int a[1001], b[1001], c[1001];
	for (int i = 0; i < n1; i++) a[i] = s1[i] - '0';
	for (int i = 0; i < n2; i++) b[i] = s2[i] - '0';
	reverse (a, n1); reverse (b, n2);
	for (int i = n2; i < n1; i++) b[i] = 0;
	for (int i = 0; i < n1; i++)
	{
		int tmp = a[i] - b[i] - nho;
		if (tmp < 0)
		{
			nho = 1;
			c[n++] = tmp + 10;
		}
		else
		{
			nho = 0;
			c[n++] = tmp;
		}
	}
	reverse (c, n);
	for (int i = 0; i < n; i++)
	{
		if (c[i] != 0)
		{
			idx = i;
			break;		
		}
	}
	if (idx == -1)
		printf ("0");
	else
		for (int i = idx; i < n; i++)
			printf ("%d", c[i]);
	printf ("\n");
}

int main ()
{
	int t;
	scanf ("%d \n", &t);
	while (t--)
	{
		char s1[1001], s2[1001];
		gets (s1); gets (s2);
		if (check (s1, s2))
			tinhHieu(s1, s2);
		else 
			tinhHieu (s2, s1);
	}
}

//3
//456
//789
//100000000000000000000000000001
//99
//123456789012345678901234567890
//1234567890
