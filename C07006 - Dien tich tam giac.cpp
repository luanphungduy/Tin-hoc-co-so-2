#include <stdio.h>
#include <math.h>

struct Point
{
	double x, y;	
};

typedef struct Point P;

void nhap (P *a)
{
	scanf ("%lf%lf", &a->x, &a->y);
}

double canh (P a, P b)
{
	return sqrt (pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int check (double d1, double d2, double d3)
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
		nhap (&a);
		nhap (&b);
		nhap (&c);
		double d1, d2, d3, S;
		d1 = canh(a, b);
		d2 = canh(b, c);
		d3 = canh(c, a);
		S = sqrt((d1+d2+d3)*(d1+d2-d3)*(d2+d3-d1)*(d3+d1-d2))/4;
		if (!check (d1, d2, d3))
			printf ("INVALID\n");
		else 
			printf ("%0.2lf\n", S);
	}
}

//3
//0 0 0 5 0 199
//1 1 1 1 1 1
//0 0 0 5 5 0
