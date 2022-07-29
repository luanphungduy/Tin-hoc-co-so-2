//#include <stdio.h>
//#include <math.h>
//
//long long gt(int n)
//{
//	long long res = 1;
//	for (int i = 1; i <= n; i++)
//		res *= i;
//	return res;
//}
//
//int main ()
//{
//	int t;
//	scanf ("%d", &t);
//	while (t--)
//	{
//		int n, p, x = 0; // n! chia het p^x (x max)
//		scanf ("%d %d", &n, &p);
//		long long gt_n = gt(n);
//		while (gt_n % p == 0) 
//		{
//			x++;
//		}
//		printf ("%d \n", x);
//	}
//}

#include<stdio.h> 
int main ()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		int n, p, tmp, i = 1, cnt = 0; 
		scanf ("%d %d", &n, &p);  
		while (p * i <= n)
		{ 
			tmp = p*i; 
			while (tmp % p == 0)
			{ 
				tmp /= p; 
				cnt++; 
			} 
			++i; 
		} 
		printf("%d \n", cnt); 
	} 
}

//3
//62  7
//76  2
//3  5
