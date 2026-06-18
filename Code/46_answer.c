/*46.	Write a program to input a line of text, store it in a data file,
 and then display the number of vowels and white spaces from that file.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char text[200];
    FILE *fptr;
    char ch;
    int vowels = 0, spaces = 0;

    
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);


    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!");
        exit(1);
    }
    fprintf(fptr, "%s", text);
    fclose(fptr);


    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF) {
        
        if (isspace(ch)) {
            spaces++;
        }

        
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
            lower_ch == 'o' || lower_ch == 'u') {
            vowels++;
        }
    }
    fclose(fptr);

    // Display results
    printf("\nResults from file:\n");
    printf("Number of Vowels: %d\n", vowels);
    printf("Number of White Spaces: %d\n", spaces);

    return 0;
}
