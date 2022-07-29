#include <stdio.h>
#include <string.h>

struct ThiSinh 
{
	int ma;
	char ten[50], ns[20];
	float d1, d2, d3, sum;
};

typedef struct ThiSinh TS;
static int i = 0;

void nhap (TS *x)
{
	x->ma = ++i;
	scanf ("\n");
	gets (x->ten);
	scanf ("\n");
	gets (x->ns);
	scanf ("%f %f %f", &x->d1, &x->d2, &x->d3);
	x->sum = x->d1 + x->d2 + x->d3;
}

void in (TS x)
{
	printf ("%d ", x.ma);
	int n = strlen (x.ten), m = strlen (x.ns);
	for (int i = 0; i < n; i++)
		printf ("%c", x.ten[i]);
	printf (" ");
	for (int i = 0; i < m; i++)
		printf ("%c", x.ns[i]);
	printf (" %.1f\n", x.sum);
}

void swap (TS *x, TS *y)
{
	TS tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void sapXep (TS ds[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (ds[i].sum < ds[j].sum)
				swap (&ds[i], &ds[j]);
}

int main ()
{
	int n;
	scanf ("%d \n", &n);
	TS ds[n];
	for (int i = 0; i < n; i++)
		nhap (&ds[i]);
	sapXep (ds, n);
	for (int i = 0; i < n; i++)
		in (ds[i]);
}

//3
//Nguyen Van A
//12/12/1994
//3.5
//7.0
//5.5
//Nguyen Van B
//1/9/1994
//7.5
//9.5
//9.5
//Nguyen Van C
//6/7/1994
//4.5
//4.5
//5.0
