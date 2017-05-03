/*  Sunday 30 April 2017 06:51:15 PM IST  */

#include<stdio.h>
void main()
{
	int l,u,i,t,s=0,d;
	
	printf("Enter the lower and upper limit : ");
	scanf("%d %d",&l,&u);
	printf("The sum of digits from %d to %d : \n",l,u);
	for(i=l;i<=u;i++)
	{
		t=i;
		s=0;
		while(t>0)
		{
			
			d=t%10;
			s=s+d;
			t=t/10;


		}
		printf("%d = %d \n",i,s);
		



	}
	
	
	

}
