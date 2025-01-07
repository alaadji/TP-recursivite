#include <stdio.h>
#include <stdlib.h>
#include"functionRec.h"
int main()
{
    int nombre;
    long resultat;
    //printf("Hello world!\n");
    printf("Entrer un nombre \n");
    scanf("%d",&nombre);
    resultat = factorielle(nombre);

    printf("le factorielle de %d est %ld", nombre , resultat);

    return 0;
}
