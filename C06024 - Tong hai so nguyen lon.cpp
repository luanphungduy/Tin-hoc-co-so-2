#include <stdio.h>
#include <string.h>

////C1
//char to_char (int x)
//{
//	return x + 48;
//}
//
//void reverse (char s[])
//{
//	for (int i = 0; i < strlen(s) / 2; i++)
//	{
//		char tmp = s[i];
//		s[i] = s[strlen(s) - 1 - i];
//		s[strlen(s) - 1 - i] = tmp;
//	}
//}
//
//void tinhTong (char s1[], char s2[]) // s1 >= s2
//{
//	reverse (s1); reverse (s2);
//	char res[501];
//	for (int i = strlen (s2); i < strlen(s1); i++)
//		s2[i] = '0';
//	int nho = 0, n = 0;
//	for (int i = 0; i < strlen(s1); i++)
//	{
//		int tmp = s1[i] - '0' + s2[i] - '0' + nho;
//		res[n++] = to_char (tmp % 10);
//		nho = tmp / 10;
//	}
//	if (nho > 0)
//	{
//		res[n++] = to_char(nho);
//	}
//	reverse (res);
//	printf ("%s \n", res);
//}

//C2 
void reverse2 (int a[], int n)
{
	int l = 0, r = n - 1;
	while (l < r)
	{
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}

void tinhTong (char s1[], char s2[]) 
{
	int n1 = strlen(s1), n2 = strlen(s2), a[501], b[501], c[501], nho = 0, n = 0;
	for (int i = 0; i < n1; i++) a[i] = s1[i] - '0';
	for (int i = 0; i < n2; i++) b[i] = s2[i] - '0';
	reverse2 (a, n1); reverse2 (b, n2);
	for (int i = n2; i < n1; i++) b[i] = 0;
	for (int i = 0; i < n1; i++)
	{
		int tmp = a[i] + b[i] + nho;
		c[n++] = tmp % 10;
		nho = tmp / 10; 
	}
	if (nho > 0)
		c[n++] = nho;
	reverse2 (c, n);
	for (int i = 0; i < n; i++)
		printf ("%d", c[i]);
	printf ("\n");
}

int main ()
{
	int t;
	scanf ("%d \n", &t);
	while (t--)
	{
		char s1[501], s2[501];
		gets (s1); gets (s2);
		if (strlen(s1) >= strlen (s2))
			tinhTong (s1, s2);
		else 
			tinhTong (s2, s1);
	}
}

//3
//12
//100
//1212
//8888
//121212121212121212
//45678978
