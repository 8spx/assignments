#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int ch,n;
	float size,e,td;
	printf("Enter the size of the project: ");
	scanf("%f",&size);
	printf("\n1.Organic Project\n2.Semidetached\n3.Embedded\n");
	while(1)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:e=2.4*pow(size,1.05);
				   td=2.5*pow(e,0.38);
				   break;
			case 2:e=3.0*pow(size,1.12);
				   td=2.5*pow(e,0.35);
				   break;
			case 3:e=3.6*pow(size,1.2);
				   td=2.5*pow(e,0.32);
				   break;
			default:printf("Enter a valid choice.\n");
					exit(0);
		}
		printf("\nThe value of the Effort is %0.2f PM.",e);
		printf("\nThe value of the time duration is %0.2f Months.\n",td);
	}

}
