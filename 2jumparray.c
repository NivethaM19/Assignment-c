#include <stdio.h>

int main(void) 
{	
	int m,i;
	int a[5]={2,1,2,1,5};
	int flag;
	for(i=0;i<5;i=i+m)
	{
		m=a[i];
		if(i==4)
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
	
	return 0;
}
