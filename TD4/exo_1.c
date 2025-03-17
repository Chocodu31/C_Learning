#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define E 10e-10
#define N 10

int Max(int Tab[], int NbElt) {
	int first = Tab[0];
	for (int i = 0; i<NbElt; i++) {
		if (Tab[i]>first) {
			first = Tab[i];
		}
	}
	return first;
}

int Min(int Tab[], int NbElt) {
	int first = Tab[0];
	for (int i = 0; i<NbElt; i++) {
		if (Tab[i]<first) {
			first = Tab[i];
		}
	}
	return first;
}

void MinMax(int Tab[], int NbElt, int *pMin, int *pMax) {
	*pMin = Min(Tab, NbElt);
	*pMax = Max(Tab, NbElt);
}


//MARCHE PAS
void bisMinMax(int Tab[], int NbElt, int **ppMin, int **ppMax) {
	int min = Tab[0], max = Tab[0];
	int *pMin;
	int *pMax;
	for (int i = 0; i<NbElt; i++) {
		if (Tab[i]<min) {
			pMin = &Tab[i];
			min = Tab[i];
		}
		if (Tab[i]>max) {
			pMax = &Tab[i];
			max = Tab[i];
		}
	}
	*ppMin = pMin;
	*ppMax = pMax;
}
//

int SupprimerVal(int Tab[], int *pNbElt, int Val) {
	int sup = 0;
	int i = 0;
	while (i<*pNbElt) {
		if (Tab[i] == Val) {
			for (int k = i; k<*pNbElt-1; k++) {
				Tab[k] = Tab[k+1];
			}
			(*pNbElt)--;
			sup++;
		} else {
			i++;
		}
	}
	return sup;
}

void AfficherTab(int Tab[], int NbElt) {
	for (int i = 0; i<NbElt; i++) {
		printf("%d ", Tab[i]);
	}
	printf("\n");
}

int main(void) {
	int Tab[4] = {1, 2, 2, 4};
	int NbElt = 4;
	AfficherTab(Tab, NbElt);
	int min = Min(Tab,NbElt);
	int max = Max(Tab,NbElt);
	printf("Min : %d \n", min);
	printf("Max : %d \n", max);
	MinMax(Tab, NbElt, &min, &max);
	printf("Le min : %d \nLe max : %d\n", min, max);
	int sup = SupprimerVal(Tab, &NbElt, 2);
	printf("Il y a eu %d suppression.\n", sup);
	AfficherTab(Tab, NbElt);

	int *pmin, *pmax;
	bisMinMax(Tab, NbElt, *pmin, *pmax);
	printf("Le min : %d \nLe max : %d\n", *pmin, *pmax);

}

