#include<stdio.h>
int main()
{
int n,i,j,c=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=n;j>=0;j--)
    {
    if((i*1)+(j*2)==n)
        {
        c=c+1;
        }
    }
}
printf("%d",c);
return 0;
}