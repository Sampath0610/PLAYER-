#include<stdio.h>
#include<conio.h>
void main()
{
    char m[50];
    int i,j,l=0,flag=0,count=0;
    scanf("%s",m);
    l=strlen(m);
    printf("%d",l);
    for(i=0;m[i]!='\0';i++)
    {
            if(m[i]=='@')
            {
                printf("\n@ satisfied");
            }
            if(m[i]=='.')
            {
                printf("\n.satisfied");
            }
    }
    for(i=0;m[i]!='@';i++)
    {
        count++;
    }
    if(count>3)
    {
        printf("\n3 @");
    }
    for(i=1;m[i]!='\0';i++)
    {
        if((m[l-1]=='m')&&(m[l-2]=='o')&&(m[l-3]=='c')&&(m[l-4]=='.'))
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        printf("\n.com present");
    }
}

