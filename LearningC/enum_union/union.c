/***********************************
/* MMIR01. Union
************************************/

#include <stdio.h>

int main()
{	
	//Declaration of a structure + variable.
	union date {
		int day;
		char month [10];
	};
	
	//Initialize first value
	union date instant = {12};
	printf("Day: %d\n", instant.day);
	//Empty
	printf("Month: %s\n", instant.month);
	
	/*Error. Unions cannot have two fields with value, due to they are 
	/*in the same memory position*/
	//.month = "January";
	//printf("Month: %s\n", instant.month);
	
	union date instant2 = {15, "January"};
	printf("Day 2: %d\n", instant2.day);
	//Print nothing. instant2 is initialized just with the value 12
	printf("Month2: %s\n", instant2.month);
	
	union date instant3 = {.month = "March"};
	printf("Month3: %s\n", instant3.month);
	return 0;
}