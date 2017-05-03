/*Wednesday 03 May 2017 12:12:20 PM IST */
#include<stdio.h>
void main()
{
	int lim,i,a[100],n,f=0;
	printf("Enter the limit : ");
	scanf("%d",&lim);

	for(i=0;i<lim;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&a[i]);
	}	

	printf("Enter elememt to be found : ");
	scanf("%d",&n);
	
	for(i=0;i<lim;i++)
	{	
		if(a[i]==n)
		{	f=1;
			break;	
		}	


	}

	if(f==1)
		printf("The element %d is found in location %d ",n,i+1);

	else 
		printf("The elememt %d is not present in the list ",n);


}
