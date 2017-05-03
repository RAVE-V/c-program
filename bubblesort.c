/*Sunday 30 April 2017 03:48:21 PM IST*/ 

#include<stdio.h>
void main()
{
	int lim,i,j,a[100],c=0,temp;
	printf("Enter the limits of elememts : ");
	scanf("%d",&lim);

	for(i=0;i<lim;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("The unsorted list is : ");
	for(i=0;i<lim;i++)
	{
		printf("%d ",a[i]);
		c=c+1;
		
	}
	printf("\n");

	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}


		}
	}
	printf("The sorted list is : ");
	for(i=0;i<lim;i++)
	{
		printf("%d ",a[i]);
		c=c+1;
	}
		
	printf("\n");
}
