#include<stdio.h>

int main()
{
	int weights[5][3]={{3,4,6},{4,5,7},{3,4,6},{7,10,15},{5,7,10}};
	char type[5][50]={"External Inputs",
		"External Outputs","External Enquiries","Internal Logical Files","External Interface Files"};
	char complexity[3][20]={"Low","Average","High"};
	int ufp=0,di=0,rating;
	int ip[5][3];
	float fp,caf;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\nEnter Value of %s %s = ",complexity[j],type[i]);
			scanf("%d",&ip[i][j]);
		}
	}

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
			ufp+=(ip[i][j]*weights[i][j]);
	}

	printf("\nValue of UFP = %d",ufp);

	printf("\nEnter Rating of 14 Factors (Scale: 0-5):");
	printf("\n0 - No Influence");
	printf("\n1 - Incidental");
	printf("\n2 - Moderate");
	printf("\n3 - Average");
	printf("\n4 - Significant");
	printf("\n5 - Essentail\n");

	for(int i=0;i<14;i++)
	{
		printf("Value 0f %d = ",i+1);
		scanf("%d",&rating);
		di+=rating;
	}

	caf = 0.65+0.01*di;
	fp=ufp*caf;
	printf("\nDegree of Influence = %d",di);
	printf("\nAFP Value = %f",fp);
	return 0;
}
