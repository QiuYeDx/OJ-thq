#include<stdio.h>

int main()
{
	int N=0,i=0;
	double m[64]={0};
	double sum=0;
	
	scanf("%lf%d",&m[0],&N);
	while(i<N)
	{
		sum += 2*m[i];
		m[i+1] = m[i] / 2;
		i++;
	}
	sum -= m[0];
	printf("%.2lf %.2lf",m[N],sum);
	
	return 0;
}
