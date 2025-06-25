#include <stdio.h>

int main()
{
    int num1, num2, counter = 0;
    scanf("%d %d", &num1, &num2);

    for(counter = 1; num1>num2; counter++)
    {
        num1 -= num2;
    }
    
    printf("Sub : %d", counter);
    return 0;
}