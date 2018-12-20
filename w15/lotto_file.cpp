#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

FILE *fp1;

struct Date
{
    int year;
    int month;
    int day;
};

struct Lotto
{
    Date date;
    int num[6];
};


int duplicate(int num[], int pos)
{
    for(int i=0; i<pos; i++)
    {
        if(num[i]==num[pos])
            return 1;
    }
    return 0;
}

void randgen(Lotto lottos[], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        lottos[i].date.year = rand()%11+2010;
        lottos[i].date.month = rand()%12+1;
        lottos[i].date.day = rand()%31+1;
        for(int j=0; j<6; j++)
        {
            do
            {
                temp = rand()%49+1;
            }
            while(duplicate(lottos[i].num,j));

            lottos[i].num[j] = temp;
        }
    }
    printf("%d lotto data has been randomly generated.\n\n", n);
}

void showLottos(Lotto lottos[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0; j<6; j++)
            printf("%02d ", lottos[i].num[j]);
        printf("\n");
    }
}

void resetLottos(Lotto lottos[], int n)
{
    for(int i=0; i<n; i++)
    {
        lottos[i].date.year=0;
        lottos[i].date.month=0;
        lottos[i].date.day=0;
        for(int j=0; j<6; j++)
            lottos[i].num[j] = 0;
    }
    printf("All lottos[n] data are reset to 0\n\n");
}


void readFile(Lotto lottos[])
{
    char filename[80];
    printf("\nEnter filename: ");
    scanf("%s", filename);
    fp1 = fopen(filename, "r");
    if(fp1==NULL)
    {
        printf("Error on creating file\n");
        exit(1);
    }
    int i=0;
    while(fscanf(fp1, "%d/%d/%d %d %d %d %d %d %d",
                 &lottos[i].date.year, &lottos[i].date.month, &lottos[i].date.day,
                 &lottos[i].num[0], &lottos[i].num[1], &lottos[i].num[2],
                 &lottos[i].num[3], &lottos[i].num[4], &lottos[i].num[5] )==9)
    {
        i++;
        //showLottos(lottos, i);
    }
    fclose(fp1);
    printf("%d lotto data has been read from file %s successfully.\n\n", i, filename);
}


void writeFile(Lotto lottos[], int n)
{
    char filename[80];
    int choice;
    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Choice: 1 for write over, 2 for append\n=> ");
    scanf("%d",&choice);
    if(choice==1)
    {
        fp1 = fopen(filename, "w");
    }
    else
    {
        fp1 = fopen(filename, "a");
    }

    if(fp1==NULL)
    {
        printf("Error on creating file\n");
        exit(1);
    }
    for(int i=0; i<n; i++)
    {
        fprintf(fp1, "%4d/%2d/%2d ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day);
        for(int j=0; j<6; j++)
            fprintf(fp1, "%2d ", lottos[i].num[j]);
        fprintf(fp1, "\n");
    }
    fclose(fp1);
    printf("%d lotto data written to file %s successfully.\n\n", n, filename);
}

void showmenu()
{
    printf("1. randgen(lottos, n)\n");
    printf("2. readFile(lottos)\n");
    printf("3. writeFile(lottos,n)\n");
    printf("4. showLottos(lottos,n)\n");
    printf("5. exit\n");
    printf("=> ");
}

int main()
{
    Lotto lottos[MAX];
    int n;
    int choice;
    while(1)
    {
        showmenu();
        scanf("%d", &choice);
        if(choice==5)
            break;
        switch(choice)
        {
        case 1:
            printf("Enter N: ");
            scanf("%d", &n);
            printf("\n");
            randgen(lottos, n);
            break;
        case 2:
            resetLottos(lottos, n);
            readFile(lottos);
            break;
        case 3:
            writeFile(lottos, n);
            break;
        case 4:
            showLottos(lottos, n);
            printf("\n");
            break;
        }
    }
}
