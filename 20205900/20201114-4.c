#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int X=0,i=1;
	double x[64]={0};
	
	scanf("%d",&X);
	x[1] = (double)X/2;

	while(1)
	{
		x[i+1] = (x[i]+(double)X/x[i])/2;
		if(fabs(x[i+1]-x[i]) < 0.00001)
		break;
		i++;
	}	
	printf("%.3lf",x[i+1]);
	return 0;
}
