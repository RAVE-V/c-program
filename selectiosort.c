/*Wednesday 03 May 2017 12:12:43 PM IST */
#include<stdio.h>
void main()
{

	int i,lim,a[100],m,j,t;
	printf("Enter the limit : ");
	scanf("%d",&lim);

	for(i=0;i<lim;i++)
	{
		printf("Enter the is %d element : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("The unsorted elements are : ");
	for(i=0;i<lim;i++)
		printf(" %d ",a[i]);
	printf("\n");
	for(i=0;i<lim;i++)
	{
		m=i;
		for(j=i+1;j<lim;j++)
		{
			if(a[j]<a[m])
				m=j;
		}

		t=a[i];
		a[i]=a[m];
		a[m]=t;


	}
	printf("The sorted elements are : ");
	for(i=0;i<lim;i++)
		printf(" %d ",a[i]);

	printf("\n");



}
