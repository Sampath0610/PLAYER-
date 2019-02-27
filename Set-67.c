#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fact=1,i;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    if(a<0)
    {
        
    }
    else
    {
        fact*=i;
    }
    }
    printf("%d\n",fact);
}
