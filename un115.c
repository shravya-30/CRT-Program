//find sum of first n natural n numbers
#include<stdio.h>
int main()
{
    int n,i, sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
