/***********************************
MMIR01. INPUT/OUTPUT functions
from the standard library
Example: copy a file
************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE * fsource = NULL;
	FILE * ftarget = NULL;
	int character = 0;
	int error = 0;
	
	if (argc != 3)
		printf("Error. Usage: file_copy source target\n");
	else {
		fsource = fopen(argv[1], "r");	
		ftarget = fopen(argv[2], "w");	
		
		if (fsource == NULL) {
			//perror prints a custom message before the error
			perror("Error");
			printf("%s cannot be opened\n", argv[1]);
		}
		else if (ftarget == NULL){
			perror("Error");
			printf("Error %s cannot be opened\n", argv[2]);
			fclose(fsource);
		}else{
			printf("Copying the file...\n");
			//Character by character
			while ((character = fgetc(fsource)) != EOF){
				fputc(character, ftarget);
			}
			
			//Checking fgetc reached the end of the file
			if(feof(fsource)!=0)
				printf("Finished\n");
			//if eof is not found, there must be an error
			else if((error = ferror(fsource)) != 0) {
				perror("Error");
				printf("Error during the copy: %d", error);
			}
			else if((error = ferror(ftarget)) != 0) {
				perror("Error");
				printf("Error during the copy: %d", error);
			}
			
			fclose(fsource);
			fclose(ftarget);
		}
	}
	
	return 0;
}