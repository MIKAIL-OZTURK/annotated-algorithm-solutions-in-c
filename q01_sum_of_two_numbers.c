/*
 * Problem: Sum of Two Numbers
 * Source: Açıklamalı Algoritma Örnek Soruları ve Çözümleri
 * Description: Reads two integers and prints their sum.
 * Date: 2025-06-03
 * Author: Mikail ÖZTÜRK
 * Tags: basic, input-output
 */


 #include <stdio.h>

 int main()
 {
    int a, b, c;

    printf("Enter b value: "); 
    scanf("%d", &b);

    printf("Enter c value: ");
    scanf("%d", &c);

    a = b + c;
    printf("A: %d", a);

    return 0;
 }