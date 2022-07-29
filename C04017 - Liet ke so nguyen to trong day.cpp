#include <stdio.h>
#include <math.h>

int checkNt(int n)
{
	if (n < 2) 
		return 0;
	for (int i = 2; i <= sqrt (n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main ()
{
	int n, cnt = 0;
	scanf ("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	for (int i = 0; i < n; i++)
		if (checkNt(a[i]))
			cnt++;
		else a[i] = -1;
	printf ("%d ", cnt);
	for (int i = 0; i < n; i++)
		if (a[i] != -1)
			printf ("%d ", a[i]);
}

//6
//
//1 5 3 19 18 25
