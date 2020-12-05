//Problem: 朋友数量-3
//Time limit: 1s     Mem limit: 64 MB     AC/Submission: 218/247    Discuss (0)
//Problem Description
//小明加入了一个社交圈，最初他有 k 个朋友。小明发现他的朋友按以下方式增长：第 1 周少了 1 个朋友，但朋友数变为剩下的朋友数 * 4；
// 第 2 周少了 2 个朋友，但朋友数变为剩下的朋友数 * 4。依次类推，第 N 周少了 N 个朋友，但朋友数变为剩下的朋友数 * 4。
//
//如最初有 5 个朋友，第 1 周少了 1 个朋友，但朋友数变为(5-1)*4=16 个；第 2 周少了 2 个朋友，但朋友数变为(16-2)*4=56 个； 依次类推。
//
//从键盘输入一个正整数，表示小明最初的朋友数，计算并输出第 10 周后小明的朋友数。
//
//如输入5，则输出 3378760

#include<stdio.h>
#include<math.h>
int main()
{
    long num0=0;
    int i=0;

    scanf("%ld",&num0);
    for(i=0;i<10;i++)
        num0=(num0-i-1)*4;
    printf("%ld",num0);
    return 0;
}