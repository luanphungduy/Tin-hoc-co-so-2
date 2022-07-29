#include <stdio.h>

int ucln(int a, int b)
{
	int res;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	res = a;
	return res;
}

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	for (int i = a; i < b; i++)
		for (int j = i + 1; j <= b; j++)
		{
			if (ucln(i, j) == 1)
			{
				if (i < j)
					printf ("(%d,%d) \n", i, j);
				else 
					printf ("(%d,%d) \n", j, i);
			}
		}
}

//5 8
