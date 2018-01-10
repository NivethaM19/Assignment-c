
#include<stdio.h>
 
int main() 
{
   int arr[20], i, j, k, size,temp;
   scanf("%d", &size);
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
   for (i = 0; i < size; i++) 
   {
      for (j = i + 1; j < size;) 
      {
         if (arr[j] == arr[i])
         {
            for (k = j; k < size; k++)
            {
               arr[k] = arr[k + 1];
            }
            size--;
         } 
         else
            j++;
      }
   }
   for (i = 0; i < size; i++)
   {
   	for(j=i+1;j<size;j++)
   	{
   	  if(arr[i]>arr[j])
   	  {
   		temp=arr[i];
   		arr[i]=arr[j];
   		arr[j]=temp;
   	  }
    }
   }
   for(i=0;i<size;i++)
    printf("%d ", arr[i]);
 
   return 0;
}
