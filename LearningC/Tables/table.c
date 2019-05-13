/***********************************
/* MMIR01. Learn a bit more about
/* tables.
/* The program calculates the average
/* mark of a student
************************************/

#include <stdio.h>

#define TOTALEXAMS 5

int main()
{
	float marks[TOTALEXAMS];
	float average = 0.0;
	int i = 0;
	
	//Get marks from the keyboard
	for (i=0; i<TOTALEXAMS;i++){
		printf("Introduce a mark:");
		scanf("%f:", &marks[i]);
	}
	
	//Calculate the average
	for (i=0; i<TOTALEXAMS;i++){
		average += marks[i];
	}
	average /= TOTALEXAMS;
	
	printf("Average: %f\n", average);
	
	return 0;
}