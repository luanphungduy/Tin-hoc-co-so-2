//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int checkDayDu (char s[])
//{
//	int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (s[i] == '0') cnt0++;
//		if (s[i] == '1') cnt1++;
//		if (s[i] == '2') cnt2++;
//		if (s[i] == '3') cnt3++;
//		if (s[i] == '4') cnt4++;
//		if (s[i] == '5') cnt5++;
//		if (s[i] == '6') cnt6++;
//		if (s[i] == '7') cnt7++;
//		if (s[i] == '8') cnt8++;
//		if (s[i] == '9') cnt9++;
// 	}
// 	return (cnt0 != 0 && cnt1 != 0 && cnt2 != 0 && cnt3 != 0 && cnt4 != 0 && cnt5 != 0 && cnt6 != 0 && cnt7 != 0 && cnt8 != 0 && cnt9 != 0);
//}
//
//int main ()
//{
//	int t;
//	scanf ("%d", &t);
//	scanf ("\n");
//	while (t--)
//	{
//		int ok = 1;
//		char s[1001];
//		scanf ("%s", &s);
//		for (int i = 0; i < strlen (s); i++)
//			if ((s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9'))
//			{
//				ok = 0;
//				break;
//			}
//		if (ok == 0 || s[0] == '0') 
//			printf ("INVALID \n");
//		else
//		{
//			if (checkDayDu (s)) 
//				printf ("YES \n");
//			else
//				printf ("NO \n");
//		}
//	}
//}

//3
//01234aa32432432432534545b987978
//123444444444444566666666667890
//324562783924723543243243242354354354333234324


#include <stdio.h> 
#include <string.h> 
#include <ctype.h>

int main () 
{ 
	int t; 
	scanf("%d\n", &t); 
	while (t--) 
	{ 
		char s[1001]; 
		gets(s); 
		int kt = 0, n = strlen(s), a[10] = {0}; 
		for (int i = 0; i < n; i++) 
			if (!isdigit (s[i])) 
				kt = 1; 
		if (s[0] == '0' || kt) 
		{ 
			printf("INVALID\n"); 
			continue; 
		} 
		for (int i = 0; i < n; i++) 
			if (a[s[i] - '0'] == 0) 
			{ 
				a[s[i] - '0'] = 1; 
				kt++; 
				if (kt == 10) 
				{
					printf ("YES \n");
					continue;
				}
			} 
		if (kt < 10) 
			printf("NO\n"); 
	}  
}
