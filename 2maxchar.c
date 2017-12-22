#include<stdio.h>
#include<string.h>
int main(void) 
{
	char a[10],maxchar;
	int i,j,count=1,max=0,m;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
			if(count>max)
			{
				max=count;
				maxchar=a[i];
			}
			
		}
	}
	printf("\n the maximum occuring character is %c and it occurs %d",maxchar,max);
	
	return 0;
}
