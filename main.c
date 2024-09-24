#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,C;
    printf("entre en celsius : \n");
    scanf("%f",&C);
    K = C + 273.15;
    printf("kelvin is %.4f",K);
    return 0;
}
