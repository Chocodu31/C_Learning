#include <math.h>
#include <stdio.h>

int main(void) {
	int a,b,temp;
	printf("Entrez votre première valeur : \n");
	scanf("%d", &a);
	printf("Entrez votre seconde valeur : \n");
	scanf("%d", &b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);
}
