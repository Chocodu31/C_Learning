#include <math.h>
#include <stdio.h>

int main(void) {
	int far,cel;
	printf("Entrez une valeur en Farenheit : \n");
	scanf("%d", &far);
	cel =  5*(far-32)/9;
	printf("%d convertie en Celsius donne %d\n", far, cel);
}
