#include <stdio.h>

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	int tong = a + b, hieu = a - b, tich = a * b, du = a % b;
	float thuong = 1.0 * a / b;
	if (b != 0) 
	{
		printf ("%d %d %d %.2f %d", tong, hieu, tich, thuong, du);
	}
	else 
		printf ("0");
}

//10 5
