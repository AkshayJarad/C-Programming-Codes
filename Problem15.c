// Accept a Character from the user and Check Weather it is Vowel or Not

#include <stdio.h>
#include <stdbool.h>

bool isVowel(char character) 
{


    character = tolower(character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
 {
    char inputChar;
    
    printf("Enter a character: ");
    scanf(" %c", &inputChar); 

    if (isVowel(inputChar))
     {
        printf("%c is a vowel.\n", inputChar);
    } 
    else
    {
        printf("%c is not a vowel.\n", inputChar);
    }

    return 0;
}


