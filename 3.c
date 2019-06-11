#include<stdio.h>
#include<string.h>
int main()
{
    int a,rem;
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%10;
        printf("%d",rem);
        a/=10;
    }
    return 0;
}
