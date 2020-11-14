#include<stdio.h>

int main()
{
	int box[2001]={0};
	int N=0;
	int a=0,b=0;
	int i=2; //实际数字 
	int i_z=1;
	int zhishu[101]={0};
	int biaoji = 1;
	int stop = 0;
	
	zhishu[1]=2;
	scanf("%d",&N);
	while(i<=N)     //初始化有限的box 
	{
		box[i]=i;
		i++;
	}
	 
	for(i_z=1;zhishu[i_z]<N;i_z++,stop=1)
	{
		for(biaoji=1,i=zhishu[i_z]+1;i<=N;i++) //划去 
		{
			if(box[i]!=0 && box[i] % zhishu[i_z] == 0)
				box[i] = 0;
			if(box[i]!=0 && box[i] % zhishu[i_z] != 0 && biaoji == 1)
			{
				zhishu[i_z+1] = box[i];
				biaoji = 0;
				stop = 0;
			}
		}
		if(stop == 1)
		break;
	}
	
	i = 2;
	while(i<=N)
	{
		if(box[i]!=0)
			printf("%d\n",box[i]);
		i++;
	}
	return 0;	
}
