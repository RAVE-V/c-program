/*Sunday 30 April 2017 03:21:31 PM IST */

#include<stdio.h>
void main()
{
	int n,i,l=0,m,s=0,temp,d=0,p;
	printf("Enter the number : ");
	scanf("%d",&n);
	m=n;
	temp=n;
	while(m>0)
	{
		d=m%10;
		l=l+1;
		m=m/10;
		
	}
	

	while(n>0)
	{
		d=n%10;
		p=d;
		for(i=0;i<l-1;i++)
			d=d*p;
			

		s=s+d;
		n=n/10;


	}
	
	if(temp==s)
		printf("%d is an  armstrong number\n",temp);
	else
		printf("%d is not an armstrong number\n",temp);


}
