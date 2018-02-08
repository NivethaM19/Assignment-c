#include <stdio.h>

int main(void)
{
   int n;
   scanf("%d",&n);
   int a[n],i,min;
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	min=a[i];
   	for(int j=0;j<i+1;j++)
   	{
   		if(a[j]<min)
   		{
   			min=a[j];
   		}
   	}
   	printf("%d",min);
   	
   }
	return 0;
}
