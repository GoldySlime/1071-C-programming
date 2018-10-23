#include <stdio.h>

long fib(int n)
{
    if(n==0 || n ==1) return n;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    printf("fib(3) = %ld\n",fib(3));
    printf("fib(10) = %ld\n",fib(10));
    printf("fib(30) = %ld\n",fib(30));
}
