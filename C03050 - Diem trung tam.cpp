#include <stdio.h>


int main ()
{
	int n, a, b, c , d, point = -1, check = 1;
	scanf ("%d %d %d %d %d", &n, &a, &b, &c, &d);
	if (a == c || a == d)
		point = a;
	if (b == c || b == d)
		point = b;
	n -= 3;
	while (n--)
	{
		scanf ("%d %d", &a, &b);
		if (a != point && b != point)
			check = 0;
	}
	if (check) 
		printf ("Yes");
	else
		printf ("No");
}

//5
//1 2
//1 3
//1 4
//1 5	
