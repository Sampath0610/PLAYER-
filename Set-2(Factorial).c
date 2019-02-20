#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,temp=1;
    printf("enter the num");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid");
    }
    else
    for(i=1;i<=n;i++)
    {
        temp*=i;
    }
    printf("%d",temp);
}
