#include <stdio.h>
#include <string.h>

int main ()
{
	char s[101];
	scanf ("%s", s);
	int cnt_tron = 0, cnt_vuong = 0, cnt_nhon = 0;
	for (int i = 0; i < strlen (s); i++)
	{
		if (s[i] == '(') cnt_tron++;
		if (s[i] == '[') cnt_vuong++;
		if (s[i] == '{') cnt_nhon++;
		if (s[i] == ')') cnt_tron--;
		if (s[i] == ']') cnt_vuong--;
		if (s[i] == '}') cnt_nhon--;
	}
	if (cnt_tron == 0 && cnt_vuong == 0 && cnt_nhon == 0)
		printf ("1");
	else 	
		printf ("0");
}


//()()
