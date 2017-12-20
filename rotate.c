#include <stdio.h>

int main(void) {
	int a[5],temp,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int rotate;
	printf("\n enter the number of rotations");
	scanf("%d",&rotate);
	for(int j=1;j<=rotate;j++)
	{
		for(i=0;i<5;i++)
		{
		  if(i==0)
		  {
		    temp=a[i];
		    continue;
		  }
		a[i-1]=a[i];
		}
	a[i-1]=temp;
	}
  for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
  return 0;
}
