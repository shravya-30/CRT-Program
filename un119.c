//find prime number or not

#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       count++;
    }
    if (count==2)
    printf("prime number");
    else
    printf("not a prime number");
    return 0;
}
