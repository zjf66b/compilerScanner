
#include <stdio.h>
#include "token.h"
#include "scanner.h"
#include "testScanner.h"

char *tokenNames[] = {

"BEGINtk", "ENDtk", "DOtk", "WHILEtk", "WHOLEtk", "LABELtk", "RETURNtk", "INPUTtk", "OUTPUTtk", "PROGRAMtk", "WARPtk", "IFtk", "THENtk", "PICKtk", "DECLAREtk", "ASSIGNtk", "FUNCtk",


"EOFTk", "IDTk", "INTEGERTk", "EQTk", "LESSTk", "GREATERTk", "COLTk", "PLUSTk", "MINUSTk",
		"MULTTk", "DIVTk", "CARTk", "DOTTk", "LPARENTk", "RPARENTk", "COMMATk", "LEFTBRACETk",
		"RIGHTBRACETk", "SEMICOLTk", "LBRACKTk", "RBRACKTk" , "COMPARETk", "COLEQTk", "NOTEQTk", "ORTk", "ANDTk"
};

void testScanner(FILE *inputFile) {
    token t;
    int endOfFile = 0;

    setLookaheadChar(inputFile);

    while (!endOfFile) {
        t = scanner(inputFile);
	if (t.type == EOFtk) {
            endOfFile = 1;
	}
	printToken(t);
    }
}
void printToken(token t) {
    printf("%s %s %d\n", tokenNames[t.type], t.instance, t.lineNum);
}
