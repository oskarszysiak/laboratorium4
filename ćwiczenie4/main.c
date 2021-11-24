#include <stdio.h>
#include <stdlib.h>

float srednia4arg(float a,float b, float c, float d)
{
    float suma=a+b+c+d;
    float srednia=suma/4;
    return srednia;
}

int main()
{
    printf("srednia: %f", srednia4arg(1,2,3,4));
    return 0;
}
