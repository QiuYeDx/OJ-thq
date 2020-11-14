#include<stdio.h>

int main()
{
	int a[64]={2};
	int b[64]={1};
	int n=0,i=0;
	float sum=0;
	
	scanf("%d",&n);
	while(i<n)
	{
		b[i+1] = a[i];
		a[i+1] = a[i] + b[i];
		i++;
	}
	
	i = 0;
	while(i<n)
	{
		sum += (float)a[i]/b[i];
		i++;
	}
	
	printf("%.2f",sum);
	return 0;
}
