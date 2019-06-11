#include<stdio.h>
#include<string.h>
int main()
{
    int n,prod=1;
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
        do{
            prod*=n;
            n--;
        }while(n>0);
        printf("%d",prod);
    }return 0;
}
