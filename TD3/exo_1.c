#include <stdio.h>

#define N 100

int main(void) {
	int nb , somme = 0;
	double moyenne;
	float tab[N];
	printf("Entrez le nombre de valeur: \n");
        scanf("%d", &nb);
	while (nb>=N) {
		printf("ERREUR, le nombre de valeur doit être entre 0 et 100 \n");
		printf("Entrez le nombre de valeur: \n");
	        scanf("%d", &nb);
	}
	printf("Entrez les valeurs : \n");
	for (int i = 0; i < nb; i++) {
		scanf("%f", &tab[i]);
	}

	for (int i = 0; i < nb; i++) {
		somme += tab[i];
	}
	moyenne = somme / nb;
	printf("La moyenne des %d valeurs est de : %lf  \n", nb, moyenne);
	printf("Les valeurs supérieures à la moyenne sont : \n");
	for (int i = 0; i < nb; i++) {
		if (tab[i]>moyenne) {
			printf("%f ", tab[i]);
		}
	}
}
