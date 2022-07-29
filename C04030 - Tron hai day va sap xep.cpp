#include <stdio.h>

void nhap (int n, int arr[]) 
{
	for (int i = 0; i < n; i++)
		scanf ("%d", &arr[i]);
}

void sap_xep (int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		int tmp;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main ()
{
	int t, cnt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n; scanf ("%d", &n);
		int a[n], b[n], le = 0, chan = n - 1;
		nhap (n, a); sap_xep (n, a);
		nhap (n, b); sap_xep (n, b);
		printf ("Test %d: \n", cnt++);
		while (n--)
			printf ("%d %d ", a[le++], b[chan--]);
		printf ("\n");
	}
}

//2
//
//5
//
//1 2 3 1 2
//
//3 1 2 3 1
//
//4
//
//4 2 7 1
//
//5 6 2 8
