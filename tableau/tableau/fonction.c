#include <stdio.h>
#include <stdlib.h>
#include"fonction.h"









int max(double T[], int val ,int n )
{ int i;
    for(i=0;i<n;i++)
    {
        if(T[i]>val)
            T[i]=0.0;
    }
}
void afficher (double T[], int n)
{ int i;
 for(i=0;i<n;i++)
    printf("%.1f\t",T[i]);
}
void copie (double T[],double R[0],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        R[i]=T[i];
    }
}
void ordonner(double T[], int n)
{int i,k,j;
double map;

    for(i=0;i<n-1;i++)
    {

       k=i;
        for(j=i+1;j<n;j++)
    {
        if(T[j]<T[k])
        {k=j;}
    }
    map=T[i];
    T[i]=T[k];
    T[k]=map;
}
}

