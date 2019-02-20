#include<stdio.h>
void main()
{char a[20],len,i,j,temp;
scanf("%s",a);
len=strlen(a);
i=0;
j=len-1;
while(i<j)
{temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
printf("%s",a);
}
