//Problem: 数之满足条件数-3
//Time limit: 1s     Mem limit: 64 MB     AC/Submission: 203/257    Discuss (1)
//Problem Description
//求1 ~ n之间满足“用17除余2；用13除余3；用11除余4”的所有数。
//
//要求：从键盘输入正整数n（n<10000），计算结果以 %7d 的格式输出，并且每行输出 4个数。
//
//例如：
//
//输入：12000
//
//输出：
//1940 4371 6802 9233
//11664

#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    int i_ok=0;
    int i;

    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(i%17==2 && i%13==3 && i%11==4)
        {
            if(i_ok==4)
            {
                printf("\n%7d",i);
                i_ok=1;
            }
            else
            {
                printf("%7d",i);
                i_ok++;
            }
        }
    return 0;
}