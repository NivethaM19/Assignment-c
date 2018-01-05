#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],i,temp,j,min=10,d;
	for(i=0;i<7;i++)
	{
		scanf("\n%d",&a[i]);
	
	}
	for(i=0;i<7-1;i++)
	{
		for(j=i+1;j<7;j++){
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	}
	for(i=0;i<7-1;i++)
	{
		for(j=i+1;j<7;j++)
		{
		d=a[j]-a[i];
		if(d<min)
		{
			min=d;
		}
		}
		
	
	}
	printf("%d ",min);
	
	
	return 0;
}
