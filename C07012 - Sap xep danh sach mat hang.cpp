#include <stdio.h>
#include <string.h>

struct MatHang
{
	int ma;
	char ten[50], nhom[50];
	float mua, ban, lai;
};

typedef struct MatHang MH;
static int i = 0;

void nhap (MH *x)
{
	x->ma = ++i;
	scanf ("\n");
	gets (x->ten);
	scanf ("\n"); 
	gets (x->nhom);
	scanf ("%f %f", &x->mua, &x->ban);
	x->lai = x->ban - x->mua;
}

void in (MH x)
{
	printf ("%d ", x.ma);
	int n = strlen (x.ten), m = strlen (x.nhom);
	for (int i = 0; i < n; i++)
		printf ("%c", x.ten[i]);
	printf (" ");
	for (int i = 0; i < m; i++)
		printf ("%c", x.nhom[i]);
	printf (" ");
	printf ("%.2f\n", x.lai);
	
}

void swap(MH *x, MH *y)
{
	MH tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void sapXep(MH ds[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (ds[i].lai < ds[j].lai)
				swap(&ds[i], &ds[j]);
}

int main ()
{
	int n;
	scanf ("%d\n", &n);
	MH ds[n];
	for (int i = 0; i < n; i++)
		nhap(&ds[i]);
	sapXep (ds, n);
	for (int i = 0; i < n; i++)
		in (ds[i]);
}

//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37
