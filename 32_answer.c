/*32.Write a program to read a line of text and count the number of words and characters.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i = 0, words = 0, characters = 0;
    int in_word = 0; 

    printf("Enter a line of text: ");
    // Use fgets for safe input reading including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0') {
        
        if (str[i] == '\n') {
            break;
        }

        // Count every character except the newline
        characters++;

        // Logic to count words based on whitespace transitions
        if (isspace(str[i])) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
        i++;
    }

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);

    return 0;
}
