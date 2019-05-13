/***********************************
/* MMIR01. Enum
************************************/

#include <stdio.h>

int main()
{
	enum days { mon, tue, wed, thr, fri, sat, sun };
	enum days weekDays = mon;
	
	printf("Day %d\n", weekDays);
	weekDays += sun;
	printf("Day %d\n", weekDays);
	weekDays += sun;
	printf("Day %d\n", weekDays);
	
	return 0;
}