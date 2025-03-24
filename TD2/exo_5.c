#include <stdio.h>

#define max_n 18

int main(void) {
	int a,b;
	printf("Entrez l'entier a \n");
        scanf("%d", &a);
	while (a < 0 || a > 18) {
		printf("ERREUR, entrez un entier entre 0 et 18 (compris) \n");
		scanf("%d", &a);
	}

	printf("Entrez l'entier b \n");
	scanf("%d", &b);
	while (b < 0 || b > 18) {
                printf("ERREUR, entrez un entier entre 0 et 18 (compris) \n");
                scanf("%d", &b);
        }

	printf(" x |");
	for (int j = 0; j<= a; j++) {
		printf("%3d ", j);
	}

	printf("\n");
	int nbtiret;

	nbtiret = 4 + (4*(a+1)-1);
	for (int z = 1; z <= nbtiret; z++) {
		printf("-");
	}

	printf("\n");

	for (int i = 0; i <= b; i++) {
		printf("%2d |", i);
		for (int k = 0; k <= a; k++) {
			printf("%3d ", k*i);
		}
		printf("\n");
	}
}
