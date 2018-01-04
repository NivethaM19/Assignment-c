#include <stdio.h>

int main(void) {
	int a[3],i,j;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			printf("(%d ,%d)",a[i],a[j]);
		}
	}
	
	return 0;
}
