/*Any character is entered through the keyboard, write a program to 
determine whether the character entered is a capital letter, a small 
case letter, a digit or a special symbol. 
The following table shows the range of ASCII values for various 
characters: 
 A – Z =>65 – 90
 a – z => 97 – 122
 0 – 9  => 48 – 57
 special symbols 0 - 47, 58 - 64, 91 - 96, 123 - 127
 ASCII Values */

 #include <stdio.h>

 int main(void)
 {
    char character;
    int char_ascii ;
    printf("Enter any characeter: ");
    scanf("%s", &character);
    char_ascii = (int)character;

    if (char_ascii >= 65 && char_ascii <= 90)
        printf("You have entered a capital case letter ");
    else if (char_ascii >= 97 && char_ascii <= 122)
        printf("You have entered a small case letter");
    else if (char_ascii >= 48 && char_ascii <= 57)
        printf("You have entered a digit");
    else if (char_ascii >= 0 && char_ascii <= 47 || char_ascii >= 91 && char_ascii <= 96 || char_ascii >= 58 && char_ascii <= 64 || char_ascii >= 123 && char_ascii <= 127)
        printf("You have entered a special symbol");
    else
        printf("Invalid character");

    return 0;
 }