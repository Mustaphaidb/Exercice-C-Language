#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float A, B, C, D, X,X1, X2;

printf("Veuillez Entrez La Valeur De a, b, c : ");
scanf("%f %f %f",&A,&B,&C);

D = pow(-B,2) - (4*A*C); /*Delta = b²-4ac*/
if (D < 0)
    printf("Pas de Solution Reelles\n");
else if (D > 0)
{    
    X1 = ((-B)+sqrt(D)) / (2*A); 
    X2 = ((-B)-sqrt(D)) / (2*A); 
    printf("Voici le Résultat de X1 : %.2f et X2: %.2f \n",X1,X2);
}
else
{
    X = (-B) / (2*A);
    printf("Voici le Résultat de X : %.2f\n",X);
}
return 0;

}
