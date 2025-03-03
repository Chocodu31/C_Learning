#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX 100
#define N 3

int exo21(void) {
    int entier1,entier2;

    printf("Saisir un entier : ");
    //fflush(stdout);
    scanf("%d", &entier1);

    printf("Saisir un 2ieme entier : ");
    //fflush(stdout);
    scanf("%d", &entier2);

    printf("%d + %d = %d \n%d * %d = %d\n", entier1, entier2, entier1+entier2, entier1, entier2, entier1*entier2);
    return 0;
}

int exo22(void) {
    char input;
    printf("Insérer un caractère (Caractère, Lettre, Chiffre) : \n");
    scanf("%c", &input);
    printf("Méthode A: ");
    if (isalpha(input)) {
        if (islower(input)) printf(" Minuscule");
        else if (isupper(input)) printf(" Majuscule");
    }
    else if (isdigit(input)) printf(" Chiffre");
    else printf(" Caractère");

    printf("\n Méthode B: ");
    if (input>= 'A' && input<= 'Z') printf(" Majuscule");
    else if (input>= 'a' && input<= 'z') printf(" Minuscule");
    else if (input>= '0' && input<= '9') printf(" Chiffre");
    else printf(" Caractère");
}

int exo23(void) {
    int input, somme;
    printf("Entrer chiffre : ");
    scanf("%d", &input);
    while (input >= 0) {
        somme += input;
        printf("\n Somme = %d \n Ajouter : ", somme);
        scanf("%d", &input);
    }
    printf("\n Somme Finale = %d", somme);
}

int exo24(void) {
    int a,input;
    printf("Entrer le nombre de répétition souhaité : \n");
    scanf("%d", &input);
    for (a=0; a<input; a+=1) {
        printf("*");
    }
}

int exo31(void) {
    char input[MAX];
    int nbcar = 0;
    char car;

    printf("Mettez une phrase de moins de 100 caractère : \n");

    scanf("%c", &car);
    while (nbcar < MAX && car != '$') {
        input[nbcar] = car;
        nbcar ++;
        scanf("%c", &car);
    }

    for (int i = nbcar-1 ;i>=0; i--) {
        printf ("%c",input[i]);
    }

}

int exo32(void) {
    double M[N][N], v[N];

    // SAISIE M

    printf("Entrez les données M \n");
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf("%lf", &M[i][j]);
        }
    };

    // SAISE V

    printf("Entrez les données v \n");
    for (int i=0; i<N ; i++) {
        scanf("%lf", &v[i]);
    }

    // CALCUL

    double calc;
    double final[N];

    for (int i=0; i<N; i++) {
        calc = 0;
        for (int j=0; j<N; j++) {
            calc += M[i][j]*v[j];
        }
        final[i] = calc;
    }

    // PRINT FINAL

    for (int i=0; i<N; i++)
        printf("%.2f \n", final[i]);

    return 0;
}

double exo41(double input) {
    return input * input;
}

int exo42(int *a, int *b) {
    int c;
    if (a>b) {
        c = *b;
        *b = *a;
        *a = c;
    }
}

int main(void) {
    /*
    double miles,km;
    const int b = 0;

    int far, cel;
    scanf("%d", &far);
    cel = (5/9)*(far-32);
    printf("%d\n", cel);
    

    int a=0;
    while (a<3) {
        printf("%d ",a);
        a++;
    }
    */

    char ch[]="bonjour";
    printf("Voici ma chaîne:%s!\n",ch);

    printf("Hello, World!\a \n");
    //exo21();
    //exo22();
    //exo23();
    //exo24();
    //exo31();
    //exo32();

    // EXO 41 DEB //
    /*double retour;
    double input;
    printf("Inserez un nombre :\n");
    scanf("%lf", &input);
    retour = exo41(input);
    printf("Le carrée de %lf c'est : %lf \n", input, retour);*/
    // EXO 41 FIN //

    // EXO 42 DEB //
    int a,b;
    printf("Inserez première val : \n");
    scanf("%d", &a);
    printf("Inserez seconde val : \n");
    scanf("%d", &b);
    exo42(&a,&b);
    printf("Plus petite : %d, Plus grande : %d \n", a, b);

    // EXO 42 FIN //

    return 0;
}
