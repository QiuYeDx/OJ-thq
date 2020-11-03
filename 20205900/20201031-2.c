#include<stdio.h>

int main()
{
    int a,b,c,x,max,min,med;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        min = a;
        if(b>c)
        {
            max = b;
            med = c;
        }
        else
        {
            max = c;
            min = b;
        }
    }
    else
        if(a>b && a>c)
        {
            max = a;
            if(b>c)
            {
                med = b;
                min = c;
            }
            else
            {
                med = c;
                min = b;
            }
        }
        else
        {
            med = a;
            if(b>c)
            {
                max = b;
                min = c;
            }
            else
            {
                max = c;
                min = b;
            }
        }
        printf("%d",max);

        return 0;
}
