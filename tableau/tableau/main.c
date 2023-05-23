#include <stdio.h>
#include <stdlib.h>
#include"fonction.h"

int main()
{   double T[4]={16,2,4,9},R[4] ;

    copie(T,R,4);
    max(R,17,4);
    afficher(T,4);
    printf("\n");
    ordonner(R,4);
    afficher (R,4);


}
