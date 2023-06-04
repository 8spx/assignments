#include<stdio.h>

main()
{
	int arr[50],hash[20],n,i,mod;
	for(i=0;i<20;i++)
		hash[i]=-9999;
	printf("ENTER NO OF ELEMENTS (LESS THAN 20) :: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER VALUE: ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		mod=arr[i]%19;
		if(hash[mod]==-9999)
			hash[mod]=arr[i];
		else 
			{
				while(hash[mod]!=-9999 && mod<20)
					mod++;
				if(mod>19)
					{
						printf("FULL\n");
						break;
					}
				else
					hash[mod]=arr[i];
			} 
			
	}
		printf("RESULT: \n");
		printf("ARRAY IS:\n"); 
		for(i=0;i<n;i++)
			printf("%d\t",i);
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",arr[i]);
		}
		printf("\n");
		printf("HASH TABLE:\n");
		printf("\n");
		for(i=0;i<20;i++)
			if (hash[i]!=-9999)
			printf("%d\t",i);
		printf("\n");
		for(i=0;i<20;i++)
		{
			if (hash[i]!=-9999)
			printf("%d\t",hash[i]);
		}
	
}
