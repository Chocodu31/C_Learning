#include <stdio.h>
#include <stdlib.h>

typedef unsigned char **tMatrice;

tMatrice MatAllouer(int NbLig, int NbCol) {
	unsigned char *tab = malloc(NbLig*NbCol*sizeof(unsigned char));
	unsigned char **mat = malloc (NbLig*sizeof(unsigned char *));
	if (mat == NULL || tab == NULL) {
		printf("Erreur d'allocation\n");
		return NULL;
	}

	for (int i = 0; i<NbLig; i++) {
		mat[i] = &tab[i*NbCol];
	}

	return mat;
}

tMatrice MaLire(int *pNbLig, int *pNbCol) {
	printf("Entrer le nombre de ligne : \n");
	scanf("%d", pNbLig);
	printf("Entrer le nombre de colonne : \n");
	scanf("%d", pNbCol);

	tMatrice mat;
	mat = MatAllouer(*pNbLig, *pNbCol);

	printf("Entrer votre matrice : \n");

	for (int i = 0; i<*pNbLig; i++) {
		for (int j = 0; j<*pNbCol; j++) {
			scanf("%hhu", &mat[i][j]);
		}
	}

	return mat;
}

void MatAfficher(tMatrice Mat, int NbLig, int NbCol) {
	for (int i = 0; i<NbLig; i++) {
		printf("Ligne %d : ", i);
		for (int j = 0; j<NbCol; j++) {
			printf("%d ", Mat[i][j]);
		}
		printf("\n");
	}
}

tMatrice MatCopier(tMatrice Mat, int NbLig, int NbCol) {
	tMatrice cMat;
	cMat = MatAllouer(NbLig, NbCol);
	if (cMat == NULL) return NULL;

	for (int i = 0; i < NbLig; i++) {
		for (int j = 0; j < NbCol; j++) {
			cMat[i][j] = Mat[i][j];
		}
	}

	return cMat;
}

void MatLiberer(tMatrice *pMat) {
	free(**pMat);
	free(*pMat);

	*pMat = NULL;

	printf("Espace libérer \n");

}

/* Fonction principale */
int main(void)
{
	int NbLig, NbCol;
	tMatrice mat;
	mat = MaLire(&NbLig, &NbCol);
	printf("\n Print de mat : \n");
	MatAfficher(mat, NbLig, NbCol);
  	tMatrice cmat;
	printf("\n Print de copie de mat \n");
	cmat = MatCopier(mat, NbLig, NbCol);
	MatAfficher(cmat, NbLig, NbCol);
	MatLiberer(&mat);
	MatLiberer(&cmat);
	if (mat == NULL && cmat == NULL) printf("Espace BIEN libérer \n");
	else printf("Espace MAL libérer \n");

	return 0;
}
