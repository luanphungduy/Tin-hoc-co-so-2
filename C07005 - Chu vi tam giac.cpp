#include <stdio.h>
#include <math.h>

struct Point
{
	float x, y;	
};

typedef struct Point P;

void nhap (P *a)
{
	scanf ("%f %f", &a->x, &a->y);
}

float canh (P a, P b)
{
	// sqrt: (x2-x1)^2 + (y2-y1)^2 
	return sqrt (pow(b.x - a.x, 2) + pow(b.y - a.y, 2));		
}

int check (float d1, float d2, float d3)
{
	return (d1 + d2 > d3 && d2 + d3 > d1 && d3 + d1 > d2);
}
int main ()
{
	int t;
	scanf ("%d", &t);
	while (t--)
	{
		P a, b, c;
		float d1, d2, d3, perimeter;
		nhap (&a);
		nhap (&b);
		nhap (&c);
		d1 = canh(a, b);
		d2 = canh(b, c);
		d3 = canh(c, a);
		perimeter = d1 + d2 + d3;
		if (!check (d1, d2, d3))
			printf ("INVALID \n");
		else 
			printf ("%.3f \n", perimeter);
	}
}

//3
//0 0 0 5 0 199
//1 1 1 1 1 1
//0 0 0 5 5 0
