#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX 100
#define N 4

int exo32(void) {
    int i, j, k, l;

    // SAISIE M

    printf("Quelle est la taille de M ? \n");
    printf("i : \n");
    scanf("%d", &i);
    printf("j : \n");
    scanf("%d", &j);

    printf("Quelle est la taille de V ? \n");
    printf("k : \n");
    scanf("%d", &k);
    printf("l : \n");
    scanf("%d", &l);

    const int a = i, b = j, c = k, d = l;

    if (b != c) {
        printf("ERREUR ! Ces deux matrices ne sont pas calculable");
        return 1;
    }

    int M[a][b], V[c][d];

    printf("Entrez les données M \n");
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            scanf("%d", &M[i][j]);
        }
    };

    // SAISE V

    printf("Entrez les données v \n");
    for (int i=0; i<c; i++) {
        for (int j=0; j<d; j++) {
            scanf("%d", &V[i][j]);
        }
    };

    // CALCUL

    int calc;
    int final[a][d];

    for (int i=0; i<a; i++) {
        for (int j=0; j<d; j++) {
            calc = 0;
            for (int l=0; l<b; l++) {
                calc+= M[i][l] * V[l][j];
            }
            final[i][j] = calc;
        }
    }

    // PRINT FINAL

    for (int i=0; i<a; i++) {
        for (int j=0; j<d; j++) {
            printf("%d ", final[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(void) {

    char ch[]="bonjour";
    printf("Voici ma chaîne:%s!\n",ch);

    printf("Hello, World!\a \n");
    exo32();


    return 0;
}
