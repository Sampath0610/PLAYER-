#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[50],i,k;
    clrscr();
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++)
	{
		printf("%d ",a[i]);
	}
}
