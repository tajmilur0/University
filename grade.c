#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
    } else {
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
                printf("Grade: A\n");
                break;
            case 7:
                printf("Grade: B\n");
                break;
            case 6:
                printf("Grade: C\n");
                break;
            case 5:
                printf("Grade: D\n");
                break;
            case 4:
                printf("Grade: E\n");
                break;
            case 3:
                printf("Grade: F\n");
                break;
            default:
                printf("Grade: Fail\n");
                break;
        }
    }

    return 0;
}
