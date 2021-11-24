#include <stdio.h>
#include <stdlib.h>
int sprawdzenieznaku(int);

int main()
{
    int return1=sprawdzenieznaku(1);
    printf("%d\n", return1);
    int return2=sprawdzenieznaku(-1);
    printf("%d\n", return2);
    return 0;
}

int sprawdzenieznaku(int liczba)
{
    if(liczba>0)
    {
        return 1;
    }
    else if(liczba<0)
    {
        return 0;
    }
}
