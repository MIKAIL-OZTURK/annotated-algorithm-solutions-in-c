/*
 * Problem: Sum of Square Two Numbers
 * Source: Açıklamalı Algoritma Örnek Soruları ve Çözümleri
 * Description: Reads two integers and prints their squrea sum.
 * Date: 05.06.2023
 * Author: Mikail ÖZTÜRK
 * Tags: basic, input-output
 */

 #include <stdio.h>

 int main()
 {

    int number1 = 0;
    int number2 = 0;
    
    printf("Enter Numbers Value: ");
    scanf("%d %d", &number1, &number2);

    int square = ((number1 * number1)+ (number2 * number2));
    printf("Result: %d\n", square);



    return 0;
 }