#include <stdio.h>
#include <stdlib.h>
void znakliczby(int);
int main()
{
   znakliczby(-200);
   printf("\n");
   printf("\n");
   znakliczby(1000);
}
void znakliczby(int liczba)
{
    if(liczba>0)
    {
        printf("positive");
    }
    else if(liczba<0)
    {
         printf("negative");
    }
}
