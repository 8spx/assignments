#include <stdio.h>
#include <math.h>

double f(double);
int main()
{
	float error;
	double a,b,x;
	
	printf("Enter Correction Point:: ");
	scanf("%f",&error);
	do
	{
	printf("Enter Value of A--> ");
	scanf("%lf",&a);
	printf("Enter Value of B--> ");
	scanf("%lf",&b);
	}while(f(a)*f(b)>=0);
	
	do
	{
		x=(a+b)/2;	
	if(f(x)*f(a)<0)
	b=x;
	else 
			a=x;
		
		
	}while(fabs(a-b)>error);
	
	printf("%lf",x);
}

double f(double x)
{
	double y;
	y=3*x+sin(x)-exp(x);
	return y;
}
