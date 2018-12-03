#include<stdio.h>


int swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("Swap: %d %d\n",*pa,*pb);
}

int main()
{
    int a=10, b=20;
    printf("Main: %d %d\n",a,b);
    swap(&a,&b);
}
