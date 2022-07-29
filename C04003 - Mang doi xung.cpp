#include <stdio.h>

int ktdx(int n, int a[])
{
	for (int i = 0; i <= n / 2; i++)
	{
		if (a[i] != a[n - i - 1])
			return 0;
	}
	return 1;
}

int main () 
{
	int t;
	scanf ("%d", &t);
	while (t--) 
	{
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);  
		if (ktdx(n, a)) 
			printf ("YES \n");
		else 
			printf ("NO \n");	
	}
}

//2
//4
//1 4 4 1
//5
//1 5 5 5 3
