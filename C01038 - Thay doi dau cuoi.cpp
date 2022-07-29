//#include <stdio.h>
//
//int main ()
//{
//	int n, t, f, m = 1; // n = 1234
//	scanf ("%d", &n); 
//	t = n / 10; // t = 123
//	f = t;  // f = 123
//	while(f >= 10)
//	{
//		f /= 10; 
//		m *= 10;
//	} // f = 1; m = 100
//	t = t % m * 10 + f; // 123 % 100 * 10 + 1 = 23 * 10 + 1 = 231
//	printf("%d", t + n % 10 * m * 10); // 231 + 4 * 100 * 10 = 4231
//}

//1234

#include <stdio.h>
#include <string.h>

int main(){
	char a[10];
	scanf ("%s", a);
	int n = strlen(a);
	if(a[n-1]!='0') 
		printf("%c", a[n-1]);
	for (int i = 1; i < n - 1; i++) 
		printf("%c", a[i]);
    printf("%c", a[0]);
}
