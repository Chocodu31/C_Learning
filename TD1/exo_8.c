#include <stdio.h>

int main(void) {
	double min, max, temp;
	printf("Entrez votre valeur 1 : \n");
        scanf("%lf", &min);
	max = min;
	for (int i = 1; i < 5; i++) {
		printf("Entrez votre valeur %d : \n", i+1);
		scanf("%lf", &temp);
		if (temp<min) min = temp;
		if (temp>max) max = temp;
	}
	printf("Le plus petit c'est : %lf, le plus grand c'est : %lf\n", min, max);
}
