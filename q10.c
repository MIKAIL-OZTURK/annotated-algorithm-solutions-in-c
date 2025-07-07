#include <stdio.h>

int main()
{
    int number, counter = 1;
    scanf("%d", &number);

    while(number >= 9) 
    {
        number = number / 10;
        counter++;
    }
    printf("Counter: %d", counter);
    return 0;
}