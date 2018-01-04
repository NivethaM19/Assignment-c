#include <stdio.h>

int main(void) {
	int a[5],i,counte=0,counto=0;
	int j,k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			counte=counte+1;
			k=i;
		}
		else
		{
			counto=counto+1;
			j=i;
		}
		
	}
	if(counto==1)
	{
		printf("%d",a[j]);
	}
	else
	{
		printf("%d",a[k]);
	}
	return 0;
}
