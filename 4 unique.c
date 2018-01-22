#include <stdio.h>

int main(void) {
	int n,temp=0,flag=0;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]!=a[j])
			{
			flag=1;	
			}
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(flag==1)
		{
			printf("unique");
			break;
		}
		
		if(a[i]!=a[i+1])
		{
			
			printf("%d",a[i]);
		}
		
	}
	
	return 0;
}
