#include<stdio.h>

int main()
{
    int score;
    char level;

    scanf("%d",&score);
    if(score<60)
        level = 'E';
    else
        if(score < 70)
            level = 'D';
        else
            if(score < 80)
                level = 'C';
            else
                if(score < 90)
                    level = 'B';
                else
                    level = 'A';
    printf("%c",level);

    return 0;
}
