/***********************************
*MMIR01. Structures
Basic knowledge
************************************/

#include <stdio.h>

int main()
{
	//Declaration of the structure
	struct person {
		char name[10];
		int age;
		int code;
	};
	
	//Declaration of variables + Initialization
	struct person student = {"Laura", 20, 1};
	struct person teacher = {.name = "John", .code=1};
	
	printf("Name of the teacher: %s\n", teacher.name);
		
	//Declaration of the structure + variable
	struct animal {
		char name[10];
		int age;
		int code;
	} dog; 
	
	//Pointer to structure
	struct animal * pdog = NULL;
	pdog = &dog;
	//We cannot assign directly to a char table
	//pdog->name = "Toby";
	strcpy(pdog->name , "Toby");
	pdog->age = 7;
	printf("Name of the dog: %s\n", pdog->name);
	
	return 0;
}