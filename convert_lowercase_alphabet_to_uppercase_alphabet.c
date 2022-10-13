#include<stdio.h>

int main()
{
    char lowerChar, upperChar;
    int ascii;
    printf("Enter a lowercase Character: ");
    scanf("%c", &lowerChar);
    ascii = lowerChar;
    upperChar = ascii-32;
    printf("\nIts Uppercase = %c", upperChar);
    return 0;
}
