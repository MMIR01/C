/***********************************
/* MMIR01. Table and pointer
/* How to work with the identifier
/* of a table; and the difference 
/* with a pointer
************************************/

#include <stdio.h>

int main()
{
    //table
    char table1[] = "This is a table";
    //Pointer to char
    char *ptable = "This is a constant";
    
    //Print value of the table
    printf("Second element of the table:%c\n", table1[1]);
    //Using name of the table as a pointer
    printf("Second element of the table:%c\n", *(table1+1));
    //Print value of the string
    printf("Pointer to char. Second element: %c\n", *(ptable+1));
	//We can use pointer as a table identifier
	printf("Pointer to char. Second element: %c\n", ptable[1]);
    
    printf("Modifying value:\n");
    table1[0] = 't';
    printf("First element of the table:%c\n", table1[0]);
    *(table1+1) = 'H';
    printf("Second element of the table:%c\n", *(table1+1));
    
    //It is not possible to modify the value of a constant
    //ERROR - Segmentation fault (core dumped)
    //*(ptable+1)='H';
    
    return 0;
}