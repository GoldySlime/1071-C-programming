#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reverse(char *str1, char *str2)
{
    int j=0;
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        str2[j++] = str1[i];
    }
    str2[j]='\0';
}

void str_copy(char *str1, char *str2)
{
    int j=0;
    for(int i=0;i<strlen(str1);i++)
    {
        str2[j++] = str1[i];
    }
    str2[j]='\0';
}

int main()
{
    char *str1;
    char *str2;

    str1 = (char *)malloc(sizeof(char)*80);
    str2 = (char *)malloc(sizeof(char)*80);

    gets(str1);
    str_reverse(str1,str2);
    printf("\nString reverse\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    str_copy(str1,str2);
    printf("\nString copy\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

}
