#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter the number:-");
    scanf("%d",&n);
    if(n==1) printf("1 is neither composite nor prime");
    else {
        for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("prime");
    else printf("not prime");
    }
}