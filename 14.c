#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char s[100];
    scanf("%d\n%s",&n,s);
    for(i=n-1;i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='u'&&s[i]!='U')
        {
            printf("%c",s[i]);
        }
    }
    
    return 0;
}
