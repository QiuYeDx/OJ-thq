#include<stdio.h>

int main()
{
    float temp_h,temp_s;

    scanf("%f",&temp_h);
    temp_s = 5 * (temp_h - 32) / 9;
    printf("c=%.2f",temp_s);

    return 0;
}
