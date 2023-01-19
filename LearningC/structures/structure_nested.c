/***********************************
MMIR01. Structures
Nested structures
************************************/

#include <stdio.h>

int main()
{	
	//Declaration of a structure
	struct timestamp {
		int hour;
		int min;
		int sec
	};
	
	//Declaration of a structure + variable. One field is a variable of structure type
	struct date {
		int day;
		int month;
		int year;
		struct timestamp time1;
	};
	
	struct date instant = {8,5,2019,{16,20,11}};

	printf("Time: %d:%d:%d\n", instant.time1.hour, instant.time1.min, instant.time1.sec);
	printf("Date: %d/%d/%d\n", instant.day, instant.month, instant.year);
	
	return 0;
}