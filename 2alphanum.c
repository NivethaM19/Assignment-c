#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int m,i,alpha=0,num=0;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if('a'<=a[i] && a[i]<='z')
		{
			alpha=alpha+1;
		
		}
		else if('0'<=a[i] && a[i]<='9')
		{
			num=num+1;
		
		
		}
		else
		{
			printf("presence of characters other than alphanumeric");
		}
	}
	printf("No.of alphabets=%d",alpha);
	printf("\nNo.of numeric digits=%d",num);
	return 0;
}
