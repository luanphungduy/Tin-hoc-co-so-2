#include <stdio.h>
#include <math.h>

int main ()
{
	long m, n, can_m, can_n;
	scanf ("%ld %ld", &m, &n);
	can_m = sqrt (m);
	can_n = sqrt (n);
	if (can_m * can_m < m) 	
		can_m += 1;
	printf ("%d \n", can_n - can_m + 1);
	for (int i = can_m; i <= can_n; i++)
		printf ("%d \n", i * i);
}

//9 50
