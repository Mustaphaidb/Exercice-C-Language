#include <stdio.h>
#include <stdlib.h>

/*

Exercice # 18 de Hassan El Bahi

Les habitants d’une ville paient Iimpot selon les régles suivantes :

- Les hommes de plus de 20 ans paient I'impot

- Les femmes paient I'impét si elles ont entre 18 et 35 ans

- Les autres ne paient pas d'impot

Ecrire un programme qui demande |’age et le sexe d'un habitant et affiche si celui-ci est imposable.
*/
int main(void)
{

int age;
char sexe;

printf("Bonjour Madame & Monsieur\n \nVeuillez Entrez Votre Sexe H & F: ");
scanf("%c",&sexe);
printf("Veuillez Entrez Votre âge: ");
scanf("%d",&age);

if ((sexe == 'F' && age > 18 && age <= 35) || (sexe == 'H' && age >= 20))  /* entre 18 et 35 ans pour les femmes */  
    printf("Vous Êtes Imposable :>\n");
else
    printf("Non Imposable :>\n");

    return(0);
}
