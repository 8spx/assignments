#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int ch,n;
	float size,e,td,cd,eaf=1.0;
	printf("Enter the size of project: ");
	scanf("%f",&size);

	printf("\nEnter no of cost drivers: ");
	scanf("%d",&n);
	printf("\nEnter cost drivers: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&cd);
		eaf*=cd;
	}
	printf("\n1.Organic Project\n2.Semidetached\n3.Embedded\n");
	while(1)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:e=2.4*pow(size,1.05)*eaf;
				   td=2.5*pow(e,0.38);
				   break;
			case 2:e=3.0*pow(size,1.12)*eaf;
				   td=2.5*pow(e,0.35);
				   break;
			case 3:e=3.6*pow(size,1.2)*eaf;
				   td=2.5*pow(e,0.32);
				   break;
			default:printf("Enter valid choice.\n");
					exit(0);
		}
		printf("\nThe value of the effort is %0.2f PM",e);
		printf("\nThe value of time duration is %0.2f Months.\n",td);
	}
}
