#include <stdio.h>
#include <stdlib.h>
void kop(int tabkop[], int tabwkl[], int nk, int nw);
int main()
{
 int liczby[]={5,6,1,2,3};
 int pusta[sizeof(liczby)/sizeof(int)];

 kop(liczby, pusta, sizeof(liczby)/sizeof(int), sizeof(pusta)/sizeof(int));
 for(int i=0; i<sizeof(pusta)/sizeof(int); i++)
 {
     printf("%d  ", pusta[i]);
 }
}

void kop(int tabkop[], int tabwkl[], int nk, int nw)
{
    for(int i=0; i<nk; i++)
    {
        tabwkl[i]=tabkop[i];
    }
}
