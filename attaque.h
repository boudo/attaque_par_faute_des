#ifndef ATTAQUE
#define ATTAQUE


unsigned long long attaqueSbox();

void attaqueBox(int numero[], int expanJuste[], int expanFaux[], int verification[], int valPossibles[8][65]);

char* recheCleKEff(unsigned long long messgClair, unsigned long long messgchiffJuste, char* cleKIncompl);

unsigned long long DESAttaque(unsigned long long messgClair, char* cleKEff);

unsigned long long cleK(unsigned long long ckeK16);




#endif