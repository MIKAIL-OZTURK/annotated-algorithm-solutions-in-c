#include <stdio.h>

int main()
{
    int factorial = 1;
    int number = 0;
    scanf("%d", &number);

    while(number != 1 && number != 0)
    {
        factorial *= number--;
    }

    printf("factorial = %d \n", factorial);
    return 0;
}