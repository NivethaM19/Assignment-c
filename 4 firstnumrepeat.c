#include <stdio.h>

int main(void) {
	int a[5];
	int k;
	for(k=0;k<5;k++)
	{
		scanf("%d",&a[k]);
	}
	int i,j,flag=0;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			break;
		}
	}
	return 0;
}
