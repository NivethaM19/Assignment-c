#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[5];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		int mul=1;
		for(j=0;j<n;j++)
		{
		if(i!=j)
		{
		mul=mul*a[j];
		}
		}
		printf("%d ",mul);
	}
	return 0;
} 
