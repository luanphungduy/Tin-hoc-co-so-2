#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
	char s[201];
	gets (s);
	int cnt_alpha = 0, cnt_digit = 0, cnt_other = 0;
	for (int i = 0; i < strlen(s); i++)
		if (isalpha (s[i]))	
			cnt_alpha++;
		else if (isdigit (s[i]))
			cnt_digit++;
		else 
			cnt_other++;	
	printf ("%d %d %d", cnt_alpha, cnt_digit, cnt_other);	
}

//mon thcs mon THCS 2 ...
