/* calculation of simple intrest for three sets of p ,n and r */
#include<stdio.h>

int main()
{
	int p,n,count;
	float r,si;
	count = 1;
	while(count<4)
	{
	   printf("enter the value of p,n and r");
	   scanf("%d%d%f",&p,&n,&r);
	   si = p*n*r/100;
	   {
	   	  printf("simple intrest = Rs.%f\n",si);
	   	  count= count + 1;
	   }	
	}
return 0;
}
