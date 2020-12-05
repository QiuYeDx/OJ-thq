//Problem: 数之进制转换-3
//Time limit: 1s     Mem limit: 64 MB     AC/Submission: 101/174    Discuss (0)
//Problem Description
//在日常生活中和计算机世界中，我们经常采用一些非十进制的计数方式，
// 比如二进制、七进制（如星期的计算）、八进制、十六进制、六十进制（如1分钟等于60秒）等。
//
//要求：编写一个程序，输入一个长度小于10的字符串，该字符串表示一个二进制数，输出对应的十进制数。
//
//二进制数仅包括0、1共两个数字，如果输入的字符串中出现了不是这两个数字的字符（如3、9、x等），则将其转换为 1 参与计算。

#include<stdio.h>
#include<math.h>
int main()
{
    char ch[10]={0};
    int num[10]={0};
    int n=0;
    int i=0;
    int sum=0;

    while(scanf("%c",&ch[i])!=EOF)
    {
        i++;
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(ch[i]=='0')
            num[i]=0;
        else
            num[i]=1;
    }
    for(i=0;i<n;i++)
    {
        sum+=num[i]*pow(2,n-i-1);
    }
    printf("%d",sum);
    return 0;
}