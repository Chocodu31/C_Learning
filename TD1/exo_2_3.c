#include <stdio.h>

int exo2(void) {
	printf("Affiche un message simple à l'écran\n");
}

int exo3(void) {
	int input, carre;
	printf("Entrez un nombre\n");
	scanf("%d", &input);
	carre = input*input;
	printf("Le carré de %d est %d\n", input, carre);
}

int main(void) {
	exo2();
	exo3();
}
