#include <stdio.h>
#include <stdlib.h>
void zwracanie(char tab[], int n);
int main()
{
    char imie[]="OskarSzysiak";
    zwracanie(imie, sizeof(imie)/sizeof(char));
    return 0;
}

void zwracanie(char tab[], int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%c", tab[i]);
    }
}
