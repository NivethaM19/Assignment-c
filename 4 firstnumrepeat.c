#include <stdio.h>

int main(void) {
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
