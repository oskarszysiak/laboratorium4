#include <stdio.h>
#include <stdlib.h>
int najwieksza (int x, int y, int z);
int main()
{
    int najwieksza1=najwieksza(1,2,3);
    printf("najwieksza liczba z liczb 1, 2, 3 to %d\n", najwieksza1);
    int najwieksza2=najwieksza(-1,8,7);
    printf("najwieksza liczba z liczb -1, 8, 7 to %d\n", najwieksza2);
}
 int najwieksza(int x, int y, int z)
 {
     int maxliczba=x;
     if(y>maxliczba)
     {
         maxliczba=y;
     }

     if(z>maxliczba)
     {
         maxliczba=z;
     }
     return maxliczba;
 }
