#include <stdio.h>
#include<string.h>
int main(void) {
	char a[20];
	char temp;
	scanf("%s",a);
	int i,j;
	int n=strlen(a);
	for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	if(n%2!=0)
	{
	for(i=1;i<n;i=i+2)
	{
		if(i==1)
		{
			int u=a[i];
			if(u>91)
			{
				u=u-32;
			}
			a[i]=u;
		}
		printf("%c",a[i]);
	}
	}
	else
	{
	for(i=0;i<n;i=i+2)
	{
		if(i==0)
		{
			int u=a[i];
			if(u>91)
			{
				u=u-32;
			}
			a[i]=u;
		}
		printf("%c",a[i]);
	}	
	}
	return 0;
}
