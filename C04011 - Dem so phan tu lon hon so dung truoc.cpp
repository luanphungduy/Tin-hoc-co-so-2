#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--) 
	{
		int n, max, cnt = 0;
		scanf ("%d", &n);
		int a[n]; 
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		max = a[0];
		for (int i = 0; i < n; i++)
			if (a[i] >= max) 
			{
				max = a[i];
				cnt++;	
			}
		printf ("%d \n", cnt);	
	}
}

//1
//7
//3 5 6 8 4 2 9

