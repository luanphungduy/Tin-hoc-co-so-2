#include <stdio.h>

int main ()
{
	int days, weeks, years;
	scanf ("%d", &days);
	years = days / 365;
	weeks = (days - years * 365) / 7;
	days = days - years * 365 - weeks * 7;
	printf ("%d %d %d", years, weeks, days);
}

//350
