#include <math.h>
#include <stdio.h>

int main(void) {
        unsigned char input;
	unsigned char carre;
        printf("Entrez un nombre\n");
        scanf("%hhu", &input);
        carre = input*input;
        printf("Le carré de %hhu est %hhu\n", input, carre);
}

//unsigned char c entre 0 et 255, 16*16 c'est 256 dcp il reset a 0
