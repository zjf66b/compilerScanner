#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
	// keywords
    BEGINtk, ENDtk, DOtk, WHILEtk, WHOLEtk, LABELtk, RETURNtk, INPUTtk, OUTPUTtk, PROGRAMtk, WARPtk, IFtk, THENtk, PICKtk, DECLAREtk, ASSIGNtk, FUNCtk,

    EOFtk, IDtk, INTEGERtk, // identifiers, integers
	EQtk, LESStk, GREATERtk, COLtk, PLUStk, MINUStk, MULTtk, DIVtk, CARtk, DOTtk, LPARENtk, COLONtk, //NOTEQUALtk, // relational operators
	RPARENtk, COMMAtk, LBRACEtk, RBRACEtk, SEMICOLtk, LBRACKtk, RBRACKtk, COMPAREtk, COLEQtk, NOTEQtk, ORtk, ANDtk// and delimeters
} tokenType;                                                                                                      

typedef struct {
	tokenType type;
	char instance[9]; 
	int lineNum;
} token;

#endif
