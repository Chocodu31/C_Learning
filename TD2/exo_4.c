#include <stdio.h>

int main(void) {
	int n;
	printf("Entrez le nombre de ligne d'étoile: \n");
        scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2-1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
