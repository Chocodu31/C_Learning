#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX 80

int main(void) {
	bool palindrome = true;
	int nbcar = 0;
	char pal[MAX];
	char input[MAX];
	char car;
	printf("Entrez votre ligne de texte: \n");
        scanf("%c", &car);
	while (nbcar < MAX && car != '\n') {
		if (car != ' ') {
			input[nbcar] = car;
			nbcar ++;
		}
		scanf("%c", &car);
	}
	printf("\n Votre input est : \n");
	for (int i = 0; i < nbcar; i++) {
		printf("%c", input[i]);
	}
	printf("\n Il y a %d caractère. \n", nbcar);

	printf("Votre input a l'envers est : \n");
	for (int i = 0; i < nbcar; i++) {
		printf("%c", input[nbcar-1-i]);
		pal[i] = input[nbcar-1-i];
		if (pal[i] != input[i]) {
			palindrome = false;
		}
	}


	printf("\n");

	if (palindrome == true) {
		printf("C'est un palindrome. \n");
	} else {
		printf("C'est pas un palindrome. \n");
	}
}

