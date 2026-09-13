#include <stdio.h>

int main()
{
    char grade, sign;

    printf("Enter grade (A+, A, B, C, D, F): ");
    scanf(" %c%c", &grade, &sign);

    switch(grade)
    {
        case 'A':
            if(sign == '+')
                printf("Excellent");
            else
                printf("Very Good");
            break;

        case 'B':
            printf("Good");
            break;

        case 'C':
            printf("Work Hard");
            break;

        case 'D':
            printf("Work Hard");
            break;

        case 'F':
            printf("Fail");
            break;

        default:
            printf("Invalid Grade");
    }

    
}
