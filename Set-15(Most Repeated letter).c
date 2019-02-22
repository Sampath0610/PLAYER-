#include <stdio.h>
#include<string.h> 
void main()
{
	char a[50],c;
	int i,j,count=1,max=1,l;
    gets(a);
    l=strlen(a);
    printf("total length%d",l);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(a[i]==a[j])
		{
			count++;
			if(count>max)
			{
				max=count;
				c=a[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}
