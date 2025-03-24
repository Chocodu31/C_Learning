#include <stdio.h>

int main(void) {
	int annee;
	printf("Entrez votre année : \n");
        scanf("%d", &annee);
	if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0) {
		printf("%d est bissextile. \n", annee);
	} else {
		printf("%d n'est pas bissextile. \n", annee);
	}
}
