#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[50],i;
    clrscr();
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
    if(b[i]<a)
    {
        printf("%d",b[i]);
    }
    }
    
}
