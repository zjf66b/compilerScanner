// Zachary J Fulliam 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "testScanner.h"

int main(int argc, char *argv[]) {
	if (argc > 2) {
		printf("Error: program expects only 1 argument.\n");
		return 1;
	}

    FILE *inFilePtr = NULL;
    char *fileName = NULL;

    if (argc == 2) {

        fileName = (char *) malloc(sizeof(argv[1]));
        strcpy(fileName, argv[1]);

        char inFile[strlen(fileName)];
        strcpy(inFile, fileName);
        

		inFilePtr = fopen(inFile, "r");

		if (!inFilePtr) {
			printf("Error: File %s could not be opened\n", inFile);
			return ( 1 );
		}
	}
	else {
		inFilePtr = stdin;
	}
    testScanner(inFilePtr);
    fclose(inFilePtr);
	free(fileName);
	return ( 0 );
}
