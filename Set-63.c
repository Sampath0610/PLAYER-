#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[50],c[50],i,j;
    clrscr();
    printf("enter the size");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<a;j++)
    {
        scanf("%d",&c[j]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
        if(b[i]==c[j])
        {
        printf("%d",b[i]);
        break;
        }
        }
}
}
