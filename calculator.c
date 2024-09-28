#include<stdio.h>

int main()
{
    int a,b,c,result;
    printf("For Sumation enter 1: \n");
    printf("For Multiplication enter 2: \n");
    printf("For Division enter 3: \n");
    printf("For Subtraction enter 4: \n");
    scanf("%d",&c);

    switch(c)
    {
    case 1:

        scanf("%d %d",&a,&b);
        result = a+b;
        printf( "Sumation is : %d", result);
        break;
    case 2:

        scanf("%d %d",&a,&b);
        result = a*b;
        printf( "Multiplication is : %d", result);
        break;
    case 3:

        scanf("%d %d",&a,&b);
        result = a/b;
        printf( "Division is : %d", result);
        break;
    case 4:

        scanf("%d %d",&a,&b);
        result = a-b;
        printf( "Subtraction is : %d", result);
        break;
    default:
        printf("Invalid number");
        break;

    }

    return 0;

}
