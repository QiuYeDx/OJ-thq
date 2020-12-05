//Problem: 利息-3
//Problem Description
//某贷款机构按照贷款金额计算利息，计算方法如下：
//………………略
//从键盘输入贷款额（正整数，以万元为单位），计算并输出利息，使用 %.2f 格式输出。
//
//例如：输入20，则输出1.60

#include<stdio.h>
#include<math.h>
int main()
{
    int num0=0;
    float lixi=0;

    scanf("%d",&num0);
    if(num0>70)
    {
        lixi+=num0*0.04;
    }
    if(num0>35 && num0<=70)
    {
        lixi+=num0*0.06;
    }
    if(num0>15 && num0<=35)
    {
        lixi+=num0*0.08;
    }
    if(num0>1 && num0<=15)
        lixi+=num0*0.1;
    printf("%.2f",lixi);
    return 0;
}