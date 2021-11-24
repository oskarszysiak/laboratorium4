#include <stdio.h>
#include <stdlib.h>
int NWD(int x, int y);
int main()
{
 printf("najwiekszy wspolny dzielnik:%d", NWD(52, 134));
}

int NWD(int x, int y)
{
    do
    {
        if(x>y)
        {
            x=x-y;
        }
        else if(x<y)
        {
            y=y-x;
        }
    }
    while(x!=y);
    return x;
}
