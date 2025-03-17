#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define E 10e-10
#define N 10

void first(int input, int *heure, int *minute, int *seconde){
	int reste = input % 3600;
	(*seconde) = reste % 60;
	(*minute) = reste / 60;
	(*heure) = input / 3600;
}

void second(int input, int Tab[]) {
	int reste = input % 3600;
	Tab[0] = input / 3600;
	Tab[1] = reste/60;
	Tab[2] = reste%60;
}

int main(void) {
	int input;
	printf("Entrez une durée en seconde : \n");
	scanf("%d", &input);
	printf("\n");
	int seconde, minute, heure;
	first(input, &heure, &minute, &seconde);
	printf("%dh %dm %ds\n", heure, minute, seconde);
	int Tab[3];
	second(input,Tab);
	printf("%dh %dm %ds\n", Tab[0], Tab[1], Tab[2]);
}

