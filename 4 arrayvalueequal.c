#include <stdio.h>

int main(void) {
	
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i==a[i])
		{
			printf("%d ",i);
		}
	}
	return 0;
}
