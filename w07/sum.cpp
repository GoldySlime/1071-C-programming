#include <stdio.h>

int sum(int n)
{
    int total=0;
    for(int i=1; i<=n; i++)
    {
        total += i;
    }
    return total;
}

int rsum(int n)
{
    printf("%d\n",n);
    if(n==1)
        return 1;
    else
        return rsum(n-1)+n;
}

int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    printf("sum(%d)=%d\n",n,sum(n));
    printf("rsum(%d)=%d\n",n,rsum(n));
    return 0;
}
