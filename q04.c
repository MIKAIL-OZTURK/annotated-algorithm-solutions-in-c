#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i=1; i<=100; i++) 
    {
        sum += (i*i*i);
        printf("i = %d \t sum = %d \n", i, sum);
    }
    return 0; 
}