#include <stdio.h>

int sumodd1(int n)
{
    int total=0;
    for(int i=1; i<=2*n-1; i++)
    {
        if(i%2==1)
            total += i;
    }
    return total;
}

int sumodd2(int n)
{
    int total=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
            total += i;
    }
    return total;
}

int main()
{
    while(1)
    {
        int n;
        printf("Enter n= ");
        scanf("%d",&n);
        printf("sumodd1(%d)=%d\n",n,sumodd1(n));
        printf("sumodd2(%d)=%d\n\n",n,sumodd2(n));
    }
    return 0;
}
