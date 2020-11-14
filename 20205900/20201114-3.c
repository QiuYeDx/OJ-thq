#include<stdio.h>
//≥‘¡ÀN-1¥Œ 
int main()
{
	int N=0,i=1;
	int sum=1;
	
	scanf("%d",&N);
	while(i<N)
	{
		sum = (sum + 1) * 2;
		i++;
	}
	printf("%d",sum);
	return 0;
}
