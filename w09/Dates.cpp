#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

struct Date
{
    int year;
    int month;
    int day;
};

int main()
{
    srand(time(NULL));
    Date dates[MAX];
    int n;

    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");

    for(int i=0; i<n; i++)
    {
        dates[i].year=rand()%11+2010;
        dates[i].month=rand()%12+1;
        if(dates[i].month==2)
        {
            if(dates[i].year%4 || dates[i].year%100==0)
            {
                dates[i].day=rand()%29+1;
            }
            else
            {
                dates[i].day=rand()%28+1;
            }
        }
        else if(dates[i].month==4,6,9,11)
        {
            dates[i].day=rand()%30+1;
        }
        else
        {
            dates[i].day=rand()%31+1;
        }
        printf("%d/%02d/%02d\n", dates[i].year, dates[i].month, dates[i].day);
    }
    return 0;
}
