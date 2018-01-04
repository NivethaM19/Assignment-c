#include <stdio.h>

int main(void) {
	char a[10];
	int i,flag=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("false");
	}
	else
	{
		printf("true");
	}
	return 0;
}
