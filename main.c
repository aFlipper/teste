#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;
    printf("Insira um numero inteiro\n");
    scanf("%d", &a);
    while(a>0)
    {
        printf("%d", a%10);
        a= a/10;
    }

}
