//Problem: 数之标准化
//Problem Description
//输入10个浮点型数保存到数组 a 中，计算并输出每个数的标准化值。
//
//数组元素 a[i] 的标准化值计算公式为：
//
//要求：每个数的标准化值按照 % 8.2f 格式输出。
//
//例如：
//
//输入：1.0  2.0  3.0  4.0  5.0  6.0  7.0  8.0  9.0  10.0
//
//输出：0.11 0.22 0.33 0.44 0.56 0.67 0.78 0.89 1.00 1.11

#include<stdio.h>
#include<math.h>
int main()
{
    float a[10]={0};
    float min=0,max=0;

    for(int i=0;i<10;i++)
        scanf("%f",&a[i]);
    min=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }

    for(int i=0;i<10;i++)
        printf("%8.2f",a[i]/(max-min));
    return 0;
}