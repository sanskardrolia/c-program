// To print ascii value of characters
// ASCII - American Standard Code for Information Interchange
#include<stdio.h>
void main()
{
    printf("Enter Character\n");
    char character;
    scanf("%c",&character);// Directly we can convert char to integer using %d
    printf("ASCII value of %c is %d",character,character);
}