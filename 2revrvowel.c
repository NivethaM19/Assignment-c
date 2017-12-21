#include<stdio.h>
#include<string.h>

int main(void)	
{
	int m,i,size;
	char temp;
	char a[10];
	scanf("%s",a);
	size=strlen(a);
	m=size-1;
	for(i=0;i<=m/2;i++)
	{
		temp=a[i];
		a[i]=a[m-i];
		a[m-i]=temp;
			
	}
	printf("\n The reverse of a string:%s",a);
	int j,k;
	for(k=0;k<m;k++)
	{
	
		if(a[k]=='a'||a[k]=='e'||a[k]=='i'||a[k]=='o'||a[k]=='u')
		{
			for(j=k;j<size;j++)
			{
				a[j]=a[j+1];
			}
		size--;
			
			
		}
	}
	printf("\n The required output:%s",a);
	return 0;
}
