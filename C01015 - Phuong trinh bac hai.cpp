#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c;
	scanf ("%f %f %f", &a, &b, &c);
	if (a == 0) 
	{
		if (b == 0) // a = b = 0 => c = 0 (ko thoa man)
			printf ("NO");
		else // a = 0, b != 0 => bx + c = 0
			printf ("%.2f", -c / b);
	} 
	else 
	{
		float delta = b * b - 4 * a * c;
		if (delta == 0) 
			printf ("%.2f", -b / 2 / a);
		else 
			if (delta > 0) 
				printf ("%.2f %.2f", (- b + sqrt(delta)) / 2 / a, (-b - sqrt(delta)) / 2 / a);
			else 
				printf ("NO");		
	}	
}

//1 2 1
