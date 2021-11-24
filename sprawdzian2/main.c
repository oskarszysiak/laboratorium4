#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab2[] = {4,3,-7,2,8,0,8,1,-2,3};
    for(int i=0; i<10; i++)
    {
        printf("%d\n", tab2[9-i]);
        if(tab2[9-i]>0 && tab2[9-i]%2==0)
        {
            printf("parzysta i dodatnia liczba");
        }
    }
}
