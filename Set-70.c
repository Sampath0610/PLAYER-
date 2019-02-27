#include<stdio.h>
#include<string.h>
void main()
{
  char a[35],b[30];
  int l,i,j,len;
  printf("enter the string");
  scanf("%s",a);
  scanf("%s",b);
  l=strlen(a);
  printf("%d\n",l);
for(i=0;b[i]!='\0';i++)
{
  a[l]=b[i];
  len++;
}
printf("%s\n",a);
return 0;
}
