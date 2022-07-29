#include <stdio.h>
#include <string.h>

struct Pokemon 
{
	char ten[50];
	int k, m, cnt;	
};

typedef struct Pokemon P;

void nhap (P *x)
{
	scanf ("\n");
	gets (x->ten);
	scanf ("%d %d", &x->k, &x->m);
	int count = 0;
	while (x->m - x->k >= 0)
	{
		count++;
		x->m += 2;
		x->m -= x->k;
	}
	x->cnt = count;
}

int main ()
{
	int n, sum = 0, max = 0, idx;
	scanf ("%d\n", &n);
	P ds[n];
	for (int i = 0; i < n; i++)
	{
		nhap (&ds[i]);
		if (ds[i].cnt > max)
		{
			max = ds[i].cnt;
			idx = i;
		}		
		sum += ds[i].cnt;
	}
	printf ("%d \n", sum);
	for (int i = 0; i < strlen (ds[idx].ten); i++)
		printf ("%c", ds[idx].ten[i]);
}

//5
//Pidgey
//12 36
//Ivysaur
//10 63
//Charmander
//35 96
//Pikachu
//12 32
//Squirtle
//15 10
