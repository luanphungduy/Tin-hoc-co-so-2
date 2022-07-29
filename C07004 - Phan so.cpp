#include <stdio.h>

long long gcd (long long a, long long b)
{
	while (a != b)
	{
		if (a < b)
			b -= a;
		else
			a -= b;
	}
	return a;
}

struct PhanSo 
{
	long long tu, mau;
};

typedef struct PhanSo PS;


void nhap(PS *x)
{
	scanf ("%lld %lld", &x->tu, &x->mau);
}

void in(PS x)
{
	printf ("%lld/%lld", x.tu, x.mau);
}

void rutGon (PS *x)
{
	long long n = gcd(x->tu, x->mau);
	x->tu /= n;
	x->mau /= n;
}

void quyDong(PS *x, PS *y)
{
	long long lcm = x->mau * y->mau / gcd (x->mau, y->mau);
	x->tu *= lcm / x->mau;
	x->mau *= lcm / x->mau;
	y->tu *= lcm / y->mau;
	y->mau *= lcm / y->mau;
}

PS tong(PS x, PS y)
{
	PS res;
	res.tu = x.tu + y.tu;
	res.mau = x.mau;
	rutGon (&res);
	return res;
}

PS thuong(PS x, PS y)
{
	PS res;
	res.tu = x.tu;
	res.mau = y.tu;
	rutGon (&res);
	return res;
}

int main ()
{
	int t;
	scanf ("%d \n", &t);
	for (int i = 1; i <= t; i++)
	{
		printf ("Case #%d:\n", i);
		PS x, y, sum, div;
		nhap(&x);
		nhap(&y);
		// a
		rutGon(&x);
		rutGon(&y);
		quyDong (&x, &y);
		in(x); printf (" ");
		in(y); printf ("\n");
		// b
		sum = tong(x, y);
		in(sum); printf ("\n");
		// c
		div = thuong(x, y);
		in(div); printf ("\n");
	}
}

//2
//2 3 4 5
//1 4 7 8
