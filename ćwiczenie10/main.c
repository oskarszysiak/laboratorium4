#include <stdio.h>
#include <stdlib.h>
float srodkowyelement(float tab[], int n);
int main()
{
    float tablica1[]={5,2,1,3};
    printf("%f\n",srodkowyelement(tablica1, sizeof(tablica1)/sizeof(float)));
    float tablica2[]={5,2,1,3,4};
    printf("%f\n",srodkowyelement(tablica1, sizeof(tablica2)/sizeof(float)));
}

float srodkowyelement(float tab[], int n)
{
    float mediana;
    if(n%2==0) //dla tablicy o parzystej ilosci elementow program obliczy srednia dwoch srodkowych elementow
    {
    mediana=(tab[n/2]+tab[(n/2)-1])/2;
    return mediana;
    }
    else //dla tablicy o nieparzystej liczby elementow wskaze elemnt srodkowy(program wybierze element n/2 ale czyli np dla tablicy 5 elementowej 5/2 to 2,5 ale dzielimy inta na 2 wiec wybierze element o ideksie 2 czyli 3 element czyli srodkowy)
    {
     return tab[n/2];
    }
}
