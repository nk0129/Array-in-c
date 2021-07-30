#include<stdio.h>
int main ()
{
    int arr[10],i,n,sum=0;
    printf("enter the number of element ");
   // printf("%d",i);
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
      printf("%d",i);
      scanf("%d",&arr[i]);
    
    }
    for(i=1; i<=n; i++)
    {
        //int sum=0;
        sum+=arr[i];
    }
        printf("the sum of element in an array is %d",sum);
    
}