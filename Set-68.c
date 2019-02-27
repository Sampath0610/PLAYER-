#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[50],i,j,count=0;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        {
            count++;
        }
      
    }
    }
    printf("%d",count);
}
