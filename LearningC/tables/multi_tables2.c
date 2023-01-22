/***********************************
MMIR01. Learn a bit more about
multi tables. How to pass a multi
tabla as parameter
The program calculates the average
mark of students
************************************/

#include <stdio.h>

#define TOTALEXAMS 4
#define TOTALSTUDENTS 5

float average_student(float marks[], int exams);
float average_class(float marksClass[][TOTALEXAMS], int students, int exams);
//Another way to declare the function
//float average_class(float (float *marksClass[TOTALEXAMS), int students, int exams);
/*LOOK OUT!
this is a table of pointers > float *marksClass[TOTALEXAMS)
this is a pointer to a table > float (*marksClass)[TOTALEXAMS)
*/

int main()
{
	float marks[TOTALSTUDENTS][TOTALEXAMS]={{5,5,5,5},{10,0,10,0},{1,6,1,8},{9,8,10,10},{8,8,10,10}};
	int i = 0;
	
	//Calculate the average for student
	for (i=0; i<TOTALSTUDENTS;i++){
		printf("Average student %d: %f\n",(i+1), average_student(marks[i], TOTALEXAMS));
	}
	
	//Calculate the average of the class
	printf("Average of the class: %f\n", average_class(marks, TOTALSTUDENTS, TOTALEXAMS));
	
	return 0;
}

float average_student(float marks[], int exams){
	float average = 0.0;
	int i = 0;
	for (i=0; i<exams;i++){
		average += marks[i];
	}
	average /= exams;
	
	return average;
}

float average_class(float marksClass[][TOTALEXAMS], int students, int exams){
	float average = 0.0;
	int i = 0;
	int j = 0;

	for (i=0;i<students;i++){
		for(j=0;j,exams;j++){
			average += marksClass[i][j];
		}
	}
	average /= (students * exams);
	
	return average;	
}