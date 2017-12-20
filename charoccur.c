#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	
	int m,i,j;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	
 		int count=1;
		for(j=i+1;j<m;j++)
		{
			if(a[i]==a[j])
			{                
				 
				count=count+1;
				a[j]='+';
			}
		}
	if(a[i]!='+')
	printf("\t%c=%d",a[i],count);
	
	}
return 0;
