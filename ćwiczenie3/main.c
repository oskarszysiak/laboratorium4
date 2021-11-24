#include <stdio.h>
#include <stdlib.h>
void checkparity(float val);
int checkparitywithreturn(float);
int checkparitywithreturn12(float, int);

int main()
{
    checkparity(1.4);
    printf("\n");
    printf("\n");
    int return1=checkparitywithreturn(1);
    printf("return1:%d", return1);
    printf("\n");
    printf("\n");
    int return2=checkparitywithreturn12(11, 1);
    printf("return2:%d",return2);

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
  if((int)val % 2 == 0 )
  {
      if(controlprint==1)
      {
          printf("parzysta\n");
      }
      return 0;
  }
  else
  {
      if(controlprint==1)
      {
          printf("nieparzysta\n");
      }

      return 1;
  }
  return -1;
}
