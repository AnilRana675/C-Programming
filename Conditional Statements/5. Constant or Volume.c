//Vowel or Consonant: Write a program to check whether an entered character is a vowel or a consonant.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
	
    printf("Name: Anil Rana\nRoll no: 2\nDescription: Vowel or Consonant");
    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);  // Convert to lowercase for case-insensitive comparison

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if (isalpha(ch)) {  // Check if it's an alphabet
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
