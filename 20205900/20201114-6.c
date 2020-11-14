#include<stdio.h>

int main()
{
	int num[10]={0};
	int i=0,j=0,m=0,k=0;
	
	scanf("%d%d%d%d%d%d%d%d%d%d",&num[0],&num[1],&num[2],&num[3],&num[4],
           	&num[5],&num[6],&num[7],&num[8],&num[9]);
    
    for(i=0;i<=8;i++)
    	for(j=i+1;j<=9;j++)
    	{
    		if(num[i]>num[j])
    		{
    			m=num[i];
    			num[i]=num[j];
    			num[j]=m;
			}
		}

	for(k=0;k<=9;k++)
	printf("%d\n",num[k]);
	
	return 0;
}
