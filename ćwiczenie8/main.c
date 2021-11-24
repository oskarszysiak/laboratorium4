#include <stdio.h>
#include <stdlib.h>
int bezwzgledna(int liczba);
int kwadrat(int liczba);
int wybor(int wybranaliczba,int x);
int main()
{
    //wartosc bezwzgledna
    printf("%d\n", wybor(-5, 1));
    //kwadrat
    printf("%d\n", wybor(2,2));

}

int bezwzgledna(int liczba)
{
    if (liczba<0)
    {
        return liczba*(-1);
    }
    else
    {
        return liczba;
    }
}



int kwadrat(int liczba)
{
    return liczba*liczba;
}



int wybor(int wybranaliczba, int x)
{
   if(x==1)
   {
      return bezwzgledna(wybranaliczba);
   }
   else if(x==2)
   {
      return kwadrat(wybranaliczba);
   }
}
