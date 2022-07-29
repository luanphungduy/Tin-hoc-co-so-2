#include <stdio.h>
#include <math.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		int a, b, c, d, canh1, canh2;
		scanf ("%d %d %d %d", &a, &b, &c, &d);
		canh1 = abs (b - d);
		canh2 = abs (c - a);
		if (canh1 == canh2) 
			printf ("YES \n");
		else 
			printf ("NO \n");
	}
}

//2
//1 1 3 3
//1 2 3 7
