#include <stdio.h>

int main ()
{
	int n, n_copy, sum_gt = 0;
	scanf ("%d", &n);
	n_copy = n;
	while (n) 
	{
		int x = n % 10;
		int gt_x = 1;
		for (int i = 1; i <= x; i++)
			gt_x *= i;
		sum_gt += gt_x;
		n /= 10;
	}
	if (sum_gt == n_copy)
		printf ("1");
	else 
		printf ("0");
}

//145

