#include<stdio.h>
int main()
{
int a,b,n,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c++;
    }
}
printf("%d",c);
return 0;
}