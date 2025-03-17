#include <stdio.h>
#include <math.h>

int main(void) {
        double input, racine;
        printf("Entrez un nombre réel\n");
        scanf("%lf", &input);
        racine = sqrt(input);
        printf("La racine carré de %lf est %lf\n", input, racine);
}
