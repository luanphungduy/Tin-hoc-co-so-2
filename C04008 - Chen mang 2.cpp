#include <stdio.h>

int main () 
{
	int t, stt = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n, m, pos;
		scanf ("%d %d %d", &n, &m, &pos);
		int a[n], b[m];
		for (int i = 0 ; i < n; i++)
			scanf ("%d", &a[i]);
		for (int i = 0; i < m; i++)
			scanf ("%d", &b[i]);
		
		printf ("Test %d: \n", stt++);
		for (int i = 0; i < pos; i++)
			printf ("%d ", a[i]);
		for (int i = 0; i < m; i++) 
			printf ("%d ", b[i]);
		for (int i = pos; i < n; i++)
			printf ("%d ", a[i]);
		printf ("\n");
	}
}

//1
//4 3 1
//5 3 6 7
//2 9 11
