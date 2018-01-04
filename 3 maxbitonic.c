#include <stdio.h>

int main(void) {
	int a[7];
	int i;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<7;i++)
	{
		if(a[i]>a[i+1])
		{
			printf("%d",a[i]);
			break;
		}
	}
	

	return 0;
}
