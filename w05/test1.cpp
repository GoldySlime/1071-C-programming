#include<stdio.h>

int ArithComp(int i1, int i2)
{
    printf("%d + %d = %d \n", i1, i2, (i1+i2));
    printf("%d - %d = %d \n", i1, i2, (i1-i2));
    printf("%d * %d = %d \n", i1, i2, (i1*i2));
    printf("%d / %d = %d \n", i1, i2, (i1/i2));
    printf("%d ", i1);
    printf("%%");
    getchar();
    printf(" %d = %d \n", i2, (i1%i2));
    printf("\n Bye! Coding by 407416089.\n");
}

void BMI(int h1, int h2)
{
    float w1, w2;
    for(int i=h1; i<=h2; i++)
    {
        w1=18.5*(i*i)/10000;
        w2=24.0*(i*i)/10000;
        printf("%4d cm = %.1f ~ %.1f (kg)\n", i, w1, w2);
    }
    printf("\n Bye! Coding by 407416089.\n");
}

void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c",c);
    }
}

void VerTri(int height)
{
    for(int i=1 ; i<=height ; i++)
    {
        prchar(' ',height-i+1);
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
    }
    printf("\n");
    for(int i=1 ; i<=height ; i++)
    {
        prchar(' ',i);
        prchar('*',height-i+1);
        printf("  ");
        prchar('*',height-i+1);
        printf("\n");
    }
    printf("\n Bye! Coding by 407416089.\n");
}

/*

int encode(int e1, int e2, int e3, int e4)
{
    int r1,r2,r3,r4;
    r1=e3;
    r2=e4;
    r3=(e1+5)%10;
    r4=e2;
    printf("Encode(%1d%1d%1d%1d) = %1d%1d%1d%1d\n",e1,e2,e3,e4, r1,r2,r3,r4);
    printf("\n Bye! Coding by 407416089.\n");
}

*/

int encodee(int e1)
{
    int r1,r2,r3,r4,j1,j2,j3,j4,total;
    r1=e1/1000;
    r2=(e1-(r1*1000))/100;
    r3=(e1-(r1*1000)-(r2*100))/10;
    r4=e1-(r1*1000)-(r2*100)-(r3*10);
    j1=r3;
    j2=r4;
    j3=(r1+5)%10;
    j4=r2;
    total=(j1*1000)+(j2*100)+(j3*10)+(j4);
    printf("%d\n",total);
    printf("\n Bye! Coding by 407416089.\n");
}

/*

int decode(int n1, int n2, int n3, int n4)
{
    int r1,r2,r3,r4;
    r1=(n3+5)%10;
    r2=n4;
    r3=n1;
    r4=n2;
    printf("Decode(%1d%1d%1d%1d) = %1d%1d%1d%1d\n",n1,n2,n3,n4, r1,r2,r3,r4);
    printf("\n Bye! Coding by 407416089.\n");
}

*/

int decodee(int n1)
{
    int r1,r2,r3,r4,j1,j2,j3,j4,total;
    r1=n1/1000;
    r2=(n1-(r1*1000))/100;
    r3=(n1-(r1*1000)-(r2*100))/10;
    r4=n1-(r1*1000)-(r2*100)-(r3*10);
    j1=(r3+5)%10;
    j2=r4;
    j3=r1;
    j4=r2;
    total=(j1*1000)+(j2*100)+(j3*10)+(j4);
    printf("%d\n",total);
    printf("\n Bye! Coding by 407416089.\n");
}

int main()
{
    int choice;
    while(1)
    {
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges\n");
        printf("(3) Draw Four Vertical Triangles\n");
        printf("(4) Encode(n)\n");
        printf("(5) Decode(n)\n");
        printf("(6) Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==6)break;
        switch(choice)
        {
        case 1:
            int i1, i2;
            printf("Enter two integers: ");
            scanf("%d %d", &i1, &i2);
            ArithComp(i1, i2);
            break;
        case 2:
            int h1, h2;
            float w1, w2;
            printf("Enter height(-1 -1 to exit): ");
            scanf("%d %d", &h1, &h2);
            if(h1==-1 || h2== -1)break;
            BMI(h1, h2);
            break;
        case 3:
            int height;
            printf("Enter height(-1 to exit): ");
            scanf("%d", &height);
            if(height==-1)break;
            VerTri(height);
            break;
        case 4:
            int e1,e2,e3,e4;
            printf("Enter N(-1 to exit): ");
            //scanf("%1d%1d%1d%1d",&e1,&e2,&e3,&e4);
            scanf("%d",&e1);
            if(e1==-1)break;
            //encode(e1,e2,e3,e4);
            encodee(e1);
            break;
        case 5:
            int n1,n2,n3,n4;
            printf("Enter N(-1 to exit): ");
            //scanf("%1d%1d%1d%1d",&n1,&n2,&n3,&n4);
            scanf("%d",&n1);
            //decode(n1,n2,n3,n4);
            decodee(n1);
            if(n1==-1)break;
            break;
        }
    }
    return 0;
}
