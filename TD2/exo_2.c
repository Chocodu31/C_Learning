#include <stdio.h>

int main(void) {
	char car;
	int nblet = 0, nbvoy = 0;
	printf("Entrez votre texte : \n");
        scanf("%c", &car);
	while (car != '#') {
		nblet+=1;
		if ((car < 'a' || car > 'z') && car != ' ') {
			printf("ERREUR il ne sagit pas de lettre minuscule non accentuée");
			return 0;
		}
		if ((car == 'a') || (car == 'e')
			 || (car == 'i') || (car == 'o')
			 || (car == 'u') || (car == 'y')) {
			nbvoy +=1;
		}
		scanf("%c", &car);
	}
	printf("Il y a %d lettre pour un total de %d voyelle. \n", nblet, nbvoy);
}
