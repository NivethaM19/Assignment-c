#include<stdio.h>
#include<string.h>

int main(void) {
	char str[20];
	int m,temp,i;
	gets(str);
	m=strlen(str);
	if(m%2==0)
	{
		for(i=0;i<m;i=i+2)
		{
			temp=str[i];
			str[i]=str[i+1];
			str[i+1]=temp;
		}
		puts(str);
	}
	else
	{
		for(i=0;i<m-1;i=i+2)
		{
			temp=str[i];
			str[i]=str[i+1];
			str[i+1]=temp;
		}
		puts(str);	
	}
	
	return 0;
	
}

	
