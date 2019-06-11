#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0,i;
    char s[1000];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(i==0&&(s[0]=='X'||s[0]=='x'))
        {
            sum+=10;
        }
        else if((s[0]=='X'||s[0]=='x')&&(s[1]=='X'||s[1]=='x'))
        {
            sum+=10;
        }
        else if(s[i]=='X'||s[i]=='x')
        {
            sum+=8;
        }
        else if(s[i]=='I'||s[i]=='i')
        {
            sum+=1;
        }
        else if(s[i]=='V'||s[i]=='v')
        {
            sum+=5;
        }
    }
    printf("%d",sum);
    
    return 0;
}
