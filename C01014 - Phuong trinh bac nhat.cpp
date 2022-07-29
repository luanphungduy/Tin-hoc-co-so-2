#include <stdio.h>

int main ()
{
	float a, b;
	scanf ("%f %f", &a, &b);
	if (a == 0) 
	{
		if (b == 0) 
			printf ("Vo so nghiem");
		else 
			printf ("Vo nghiem");
	}
	else 
	{
		printf ("%.2f", -1.0 * b / a);	
	}
}

//2 -1
