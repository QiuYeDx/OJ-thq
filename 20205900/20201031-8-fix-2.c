//1-9
//10-99
//100-999
//1000-9999
//10000-99999
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int number_in, n, number_out;
int num[7],remain[7],i;

int main()
{
    int number_in, n, number_out;
    int num[7],remain[7],i;

    scanf("%d",&number_in);
    if(number_in<10)
        n = 1;
    else
        if(number_in<100)
            n = 2;
    else
        if(number_in<1000)
        n = 3;
    else
        if(number_in<10000)
        n = 4;
    else
        n = 5;

    i = n;
    remain[n] = number_in;
    while(i>0)
    {
        num[i] = remain[i] / (int)pow(10,i-1);
        remain[i-1] = remain[i] % (int)pow(10,i-1);
        i--;
    }

    printf("%d\n",n);

    i = n;
    while(i>0)
    {
        printf("%d",num[i]);
        i--;
        if(i>0)
            printf(" ");
    }

    printf("\n");

    i = 1;
    while(i<=n)
    {
        printf("%d",num[i]);
        i++;
    }

    return 0;
}
