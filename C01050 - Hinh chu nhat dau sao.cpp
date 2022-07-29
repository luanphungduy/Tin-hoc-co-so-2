#include <stdio.h>

int main ()
{
	int rong, cao;
	scanf ("%d %d", &rong, &cao);
	for (int i = 1; i <= cao; i++)
	{
		for (int j = 1; j <= rong; j++)
		{
			if (i == 1 || j == 1 || i == cao || j == rong)
				printf ("*");
			else
				printf (" ");
		}
		printf ("\n");
	}
}

// 5 4
