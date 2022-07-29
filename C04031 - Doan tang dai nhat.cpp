#include <stdio.h>

int main ()
{
	int t, idx = 1;
	scanf ("%d", &t);
	while (t--)
	{
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
			scanf ("%d", &a[i]);
		int res = 0, cnt = 0, b[n], dem = 1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i - 1]) dem++;
			else dem = 1;
			if (dem > res) {
				res = dem;
				b[0] = i - res + 1;
				cnt = 1;
			}
			else if (dem == res) {
				b[cnt] = i - res + 1;
				cnt++;	
			} 		
		}
		printf ("Test %d: \n", idx++);
		printf ("%d \n", res);
		for (int i = 0; i < cnt; i++) {
			for (int j = 0; j < res; j++)
				printf ("%d ", a[b[i] + j]);
			printf ("\n");
		}
	}
}

//2
//
//16
//
//2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
//
//12
//
//2 3 2 3 2 3 2 2 2 3 4 1


//#include <stdio.h>
//
//int Max (int a, int b)
//{
//	if (a > b) 
//		return a;
//	return b;
//}
//
//int main ()
//{
//	int t, cnt = 1;
//	scanf ("%d", &t);
//	while (t--)
//	{
//		int n;
//		scanf ("%d", &n);
//		int a[n];
//		for (int i = 0; i < n; i++)
//			scanf ("%d", &a[i]);
//		int max_length = 0, j = 0;
//		while (j < n)
//		{
//			int x = j;
//			while (a[j] < a[j + 1])	
//				j++;
//			max_length = Max (max_length, j + 1 - x);
//			j++;
//		}
//		printf ("Test %d: \n", cnt++);
//		printf ("%d \n", max_length);
//		///////////////////////////
//		j = 0;
//		while (j < n)
//		{
//			int x = j;
//			while (a[j] < a[j + 1])
//				j++;
//			if (j + 1 - x == max_length)
//			{
//				for (int i = x; i <= j; i++)
//					printf ("%d ", a[i]);
//				printf ("\n");	
//			}
//			j++;	
//		}
//	}
//}
//
////2
////
////16
////
////2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
////
////12
////
////2 3 2 3 2 3 2 2 2 3 4 1

