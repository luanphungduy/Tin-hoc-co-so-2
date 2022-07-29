#include <stdio.h> 
#include <math.h> 
#include <string.h>

int checkNt (int n) 
{  
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) 
		return 0; 
	return n > 1; 
} 

int main () 
{ 
	char s[19]; 
	scanf("%s", &s); 
	int a[18], b[10] = {0}; 
	for (int i = 0; i < strlen(s); i++)
	{ 
		a[i] = s[i] - '0'; 
		b[a[i]]++; 
	} 
	for (int i = 0; i < strlen(s); i++) 
	{ 
		if (checkNt (a[i]) && b[a[i]] > 0) 
		{ 
			printf("%d %d\n", a[i], b[a[i]]); 
			b[a[i]] = 0; 
		} 
	} 
}
//112345
