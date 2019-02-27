#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,temp,count;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=n%i;
        count=temp;
        printf("%d ",temp);
    }
   if(count%2==0)
   {
       printf("even");
   }
   else
   {
       printf("odd");
   }
}
