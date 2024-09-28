
#include<stdio.h>

int main()
{
    int c;
    printf("Enter 1-7: \n");
    scanf("%d",&c);

    switch(c)
    {
    case 1:

        printf("Saturday");
        break;
    case 2:

        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:

        printf("Tuesday");
        break;
    case 5:

        printf("Wednesday");
        break;
    case 6:

        printf("Thursday");
        break;
    case 7:

        printf("Friday");
        break;
    default:
        printf("Invalid number");
        break;

    }

    return 0;

}
