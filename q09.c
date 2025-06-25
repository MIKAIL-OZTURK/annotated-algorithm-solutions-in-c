#include <stdio.h>

int main()
{
    int num1, num2, mod;
    scanf("%d %d", &num1, num2);
    mod = num1 % num2;
    printf("Mod: %d", mod);          
    return 0;
}