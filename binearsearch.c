/*Wednesday 03 May 2017 12:11:42 PM IST */
#include<stdio.h>
void main()
{
	int i,lim,s,a[100],j,min,temp,low,high,mid;
	printf("Enter the limit : ");
	scanf("%d",&lim);
	
	for(i=0;i<lim;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be found : ");
	scanf("%d",&s);

	for(i=0;i<lim;i++)
	{
		min=i;
		for(j=0;j<lim;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[j];
		a[j]=a[min];
		a[min]=temp;
	}
	low=0;
	high=lim-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==s)
		{
			printf("%d is found at %d\n",s,mid);
			break;
		}

		else if(a[mid]>s)
			low=mid+1;

		else if(a[mid]<s)
			high=mid-1;

			
	}
	if (low>high)
			printf("%d is not found ! !\n",s);
}
