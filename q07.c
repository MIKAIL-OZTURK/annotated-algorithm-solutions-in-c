#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    scanf("%d %d", &num1, num2);
      
    for(int i=0; i<=num1; i++)
    {
        sum += num2;
    }
    printf("%d", sum);
      
    return 0;
}