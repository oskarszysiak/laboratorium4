#include <stdio.h>
#include <stdlib.h>
float srednialiczbztablicy(float liczby[], int n);

int main()
{
    float tablica[]={1.5, 2.7, 3.8, 4.1};
    printf("%f\n", srednialiczbztablicy(tablica, sizeof(tablica)/sizeof(float)));
    return 0;
}

float srednialiczbztablicy(float liczby[], int n)
{
    float suma=0;
    float srednia;
    for(int i=0; i<n;i++)
    {
        suma=suma+liczby[i];
    }
    srednia=suma/n;
    return srednia;
}
