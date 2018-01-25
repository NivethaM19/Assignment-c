#include <stdio.h>
void repeat();
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i;j<n;j+=2)
		{
			a[j]=0;
			if(a[j+1]!=0)
			count++;
		}
		if(count=0 && a[i]!=0)
		{
			printf("%d",a[0]);
		}
		
	}
	return 0;
}
