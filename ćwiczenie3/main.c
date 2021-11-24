#include <stdio.h>
#include <stdlib.h>
void checkparity(float val);
int checkparitywithreturn(float);
int checkparitywithreturn12(float, int);

int main()
{
    checkparity(1.4);
    printf("\n");
    checkparitywithreturn(1);
    int return1;
    return1=(int)checkparitywithreturn;
    printf("%d", return1);
}

void checkparity(float val)
{
int temp=val;
   if(temp%2==0)
   {
       printf("parzysta");
   }
   else
   {
       printf("nieparzysta");
   }
}

int checkparitywithreturn(float val)
{
    if((int)val%2==0)
   {
       return 0;
   }
  return 1;
}

int checkparitywithreturn12(float val, int controlprint)
{

}
