#include <stdio.h>
#include <stdlib.h>

double *CreerTableau(int NbElts) {
	double *tab = malloc(NbElts*sizeof(double));
	if (tab == NULL) {
		printf("Erreur \n");
		return NULL;
	}
	return tab;
}

void SaisirTableau(double *Tab, int NbElts) {
	double input;
	printf("Saisir %d Valeur(s): \n", NbElts);
	for (int i = 0; i<NbElts; i++) {
		scanf("%lf", &input);
		Tab[i] = input;
	}
}

void AfficherTableau(double *Tab, int NbElts) {
	for (int i = 0; i<NbElts; i++) {
		printf("%lf ", Tab[i]);
	}
	printf("\n");
}

void LibererTableau(double *Tab) {
	free(Tab);
	printf("Espace libérer \n");
}

/* Fonction principale */
int main(void)
{
	double *tab;
	int NbElts;
	printf("Nombre éléments tableau : \n");
	scanf("%d", &NbElts);
	tab = CreerTableau(NbElts);
	SaisirTableau(tab, NbElts);
	AfficherTableau(tab, NbElts);
  	LibererTableau(tab);
	return 0;
}
