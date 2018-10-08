#include <stdio.h>

int isLeap(int year)
{
    if((year%4==0&&year%100!=0) || year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int timeConvert(int hh, int mm, int ss)
{
    int sec;
    sec=(hh*3600)+(mm*60)+(ss);
}

int main()
{

    int choice;
    int year;
    int hh,mm,ss,sec;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Leap Year\n");
        printf("2. Time Convert\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter Year: ");
            scanf("%d", &year);
            if(isLeap(year))
            {
                printf("Year %d is a leap year.",year);
            }
            else
            {
                printf("Year %d is not a leap year.",year);
            }
            break;
        case 2:
            printf("Enter hh:mm:ss = ");
            scanf("%d:%d:%d", &hh, &mm, &ss);
            sec = timeConvert(hh, mm, ss);
            printf("%02d:%02d:%02d = %d\n",hh,mm,ss,sec);
            break;
        }
    }
    return 0;
}
