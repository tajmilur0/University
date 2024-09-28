
#include<stdio.h>

int main()
{
    char c;
    printf("Enter any Alphabet: \n");
    scanf("%cha",&c);

    switch(c)
    {
    case 'a':
    case 'A':

        printf("Vowel");
        break;
    case 'e':
    case 'E':

        printf("Vowel");
        break;
    case 'i':
    case 'I':
        printf("Vowel");
        break;
    case 'o':
    case 'O':

        printf("Vowel");
        break;
    case 'u':
    case 'U':

        printf("Vowel");
        break;
    default:
        if((c>='a'&& c<='z')|| (c>='A'&& c<='B'))
        {
            printf("Consonent");
        }
        else
        {
            printf("Invalid number");
        }

        break;

    }

    return 0;

}

