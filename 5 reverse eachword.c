#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100],b[10][20];
	int i,j=0,k=0;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]== ' ')
		{
			b[k][j]='\0';
			k++;
			j=0;
		}
		else
		{
			b[k][j]=a[i];
			j++;
		}
	}
	b[k][j]='\0';
	int x,temp;
	for(i=0;i<=k;i++)
	{
		int len=strlen(b[i]);
		for (j = 0, x = len - 1;j < x;j++,x--)
		{
            		temp = b[i][j];
            		b[i][j] = b[i][x];
            		b[i][x] = temp;
		}
	}
	for (i = 0;i <= k;i++)
	{
		printf("%s ", b[i]);
	}
	return 0;
}
