#include <stdio.h>
#include<string.h>
void main()
{
  char p[40],b,i;
  printf("Enter the string");
  scanf("%s",p);
  b=strlen(p);
  for(i=b;i>=0;i--)
  {
      if(p[i]!='a'&&p[i]!='e'&&p[i]!='i'&&p[i]!='o'&&p[i]!='u'&&p[i]!='A'&&p[i]!='E'&&p[i]!='I'&&p[i]!='O'&&p[i]!='U')
      printf("%c",p[i]);
  }
}
