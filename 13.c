#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum+rem*rem;
        n/=10;
    }
    printf("%d",sum);
    
    return 0;
}
