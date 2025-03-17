#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define E 10e-10
#define N 10

int main(void) {
	int n;
	double tab[N][N];
	printf("Ordre de la matrice: \n");
        scanf("%d", &n);
	while (n>N) {
		printf("ERREUR, l'ordre doit être entre 0 et 10 \n");
		printf("Ordre de la matrice: ");
	        scanf("%d", &n);
	}
	for (int i = 0; i < n; i++) {
		printf("Ligne %d : ", i+1);
		for (int j = 0; j < n; j++) {
			scanf("%lf", &tab[i][j]);
		}
	}
	bool sym = true;
	for (int i = 0; i < n && sym; i++) {
		for (int j = 0; j < n && sym; j++) {
			if (fabs(tab[i][j] - tab[j][i]) >= E) {
				sym = false;
			}
		}
	}
	if (sym == true) {
		printf("Cette matrice est symétrique.");
	} else {
		printf("Cette matrice n'est pas symétrique.");
	}
}

