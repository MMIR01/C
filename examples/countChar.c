/***********************************
MMIR01. Count the number of characters
of the arguments used in the program
(it doesn't count the name of program
itself).
Finally, it prints the total characters
number
************************************/

#include <stdio.h>

int charLength(char charTable[]);
void charCount (char * pWords[], int NumChar[], int * sizeChar);


int main (int argc, char *argv[]){

    //Reserve a table with a size depending of the number of arguments received
    int sizeArgs[(argc-1)];
    //Total number of characters
    int totalNumber = 0;

    //Ignoring the first element of the table as it represents the name of the program
    charCount(argv+1, sizeArgs, &totalNumber);

    //Printing results
    int i;
    for (i=0; i<(argc-1); i++){
        printf("Argument %d. Number of characters: %d\n", (i+1), sizeArgs[i]);
    }

    printf("Total number of characters: %d\n", totalNumber);

    return 0;
}

void charCount (char * pWords[], int NumChar[], int * sizeChar){
    int i = 0;
    *sizeChar = 0;

    for(i=0; *pWords != NULL; i++, pWords++){
        NumChar[i] = charLength(*pWords);
        *sizeChar += NumChar[i];
    }
}

int charLength(char charTable[]){
    //DEBUG
    //printf("Word: %s\n", charTable);
    int count = 0;
    for (count=0; charTable[count]!='\0';count++){}

    return count;
}