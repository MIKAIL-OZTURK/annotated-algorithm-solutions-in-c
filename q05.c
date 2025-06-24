#include <stdio.h>

int main()
{
    int dateOfBirth = 0, yourAge = 0;
    scanf("%d", &dateOfBirth);

    yourAge = 2025-dateOfBirth;

    printf("Your Age: %d \n" ,yourAge);
    return 0;
}