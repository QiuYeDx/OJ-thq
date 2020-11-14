#include<stdio.h>

int main()
{
	int num[10]={0};
	int min=0;
	int vs=0;
	int i_1=0;
	int i_2=1;
	int k=0;
	int k_i=0;
	
	scanf("%d%d%d%d%d%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4],
           	&num[5],&num[6],&num[7],&num[8],&num[9]);
    
    for(;k_i<=9;k_i++)
    {
		for(i_1=1,i_2=2;i_2<=10;i_1++,i_2++)
		{
			vs = num[i_1];
			if(num[i_1]>=num[i_2])
			{
				num[i_1]=num[i_2];
				num[i_2]=vs;
			}
		}
		
	}
	for(k=0;k<=9;k++)
	printf("%d\n",num[k]);
	
	return 0;
}
