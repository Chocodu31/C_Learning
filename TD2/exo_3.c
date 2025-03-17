#include <stdio.h>

int main(void) {
	int nb , input, somme = 0;
	double moyenne;
	printf("Entrez le nombre de valeur: \n");
        scanf("%d", &nb);
	for (int i = 0; i < nb; i++) {
		printf("Entrez la note %d : \n", i);
		scanf("%d", &input);
		while (input<0 || input>20) {
			printf("ERREUR, Entrez une note entre 0 et 20 : \n");
			scanf("%d", &input);
		}
		somme += input;
	}
	moyenne = somme / nb;
	printf("La moyenne des %d note est : %lf  \n", nb, moyenne);
}
