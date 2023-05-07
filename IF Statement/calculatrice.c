#include <stdio.h>
#include <stdlib.h>

/*
Exercice #20 De Hassan El Bahi

Rédiger un programme qui demande deux nombres entiers et l'une des
opérateurs suivant : + ,-, * , / puis effectue l’opération correspond et
affiche le résultat de cette opération.

*/
int main(void)
{

float A, B;
char C;

printf("Veuillez Entrer La 1ère Valeur: ");
scanf("%f", &A);
printf("choisi L'opération ( + & - & * & / ): ");
scanf(" %c", &C);
printf("Veuillez Entrer La 2ème Valeur: ");
scanf("%f", &B);


if (C == '+')
    printf("Voici Le Résultat: %.2f\n",A+B);
else if (C == '-')
    printf("Voici Le Résultat: %.2f\n",A-B);
else if (C == '*')
    printf("Voici Le Résultat: %.2f\n",A*B);
else if (C == '/' && B != 0)
    printf("Voici Le Résultat: %.2f\n",A/B);
else
    printf("Invalid Information !\n");

    return(0);
}
