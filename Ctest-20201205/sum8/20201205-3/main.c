//Problem: 简单输出之3
//Problem Description
//从键盘输入一个小于100000的整数 a，按照以下要求输出：
//
//Theqluckyq整数a    （其中q代表空格）
//
//例如：输入2020
//
//输出：Theqluckyq2020

#include<stdio.h>
#include<math.h>
int main()
{
    long a=0;

    scanf("%ld",&a);
    printf("The lucky %ld",a);
    return 0;
}