/***********************************
/* MMIR01. INPUT/OUTPUT functions
/* from the standard library
/* Example: copy a file
************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE * fsource = NULL;
	FILE * ftarget = NULL;
	int character = 0;
	int error = 0;
	
	if (argc != 3)
		printf("Usage: file_copy source target");
	else {
		fsource = fopen(argv[1], "r");	
		ftarget = fopen(argv[2], "w");	
		
		if (fsource == NULL)
			printf("Error %s cannot be opened", argv[1]);
		else if (ftarget == NULL){
			printf("Error %s cannot be opened", argv[2]);
			fclose(fsource);
		}else{
			printf("Copying the file...");
			//Character by character
			do{
				character = fgetc(fsource);
				if (character != EOF)
					character = fputc(character, ftarget);
			} while(character != NULL);
			
			/*Reemplace this block, just using perror*/
			//perror("Error: ");
			if(feof(fsource)!=0)
				printf("Finished");
			/*We finished to copy, but we are not at the end 
			/*of the file. So it should be an error*/
			else if(error = ferror(fsource))
				printf("Error during the copy: %d", error);
			else if(error = ferror(ftarget))
				printf("Error during the copy: %d", error);
			
			fclose(fsource);
			fclose(ftarget);
		}
	}
	
	return 0;
}