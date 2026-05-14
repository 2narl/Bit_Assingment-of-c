/*17.	Write a function to reverse a string in place without using any library function (like strrev). Also,
 write a program to check if two strings are anagrams.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Reverse string IN-PLACE 
void reverseString(char *str) {
    int len = 0;
    
    // Calculate length manually (no strlen)
    while (str[len] != '\0') {
        len++;
    }
    
    // Swap characters from start and end moving towards center
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    
    // Calculate lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    
    // Lengths must be equal
    if (len1 != len2) {
        return 0;
    }
    
    // Frequency count arrays (case insensitive, alphabets only)
    int count1[26] = {0};
    int count2[26] = {0};
    
    for (int i = 0; i < len1; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            count1[str1[i] - 'A']++;
        } else if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
        
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            count2[str2[i] - 'A']++;
        } else if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }
    
    // Compare frequencies
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str1[100], str2[100];
    
    // String Reversal
    printf("=== STRING REVERSAL ===\n");
    printf("Enter a string to reverse: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline
    
    
    printf("Original: %s\n", str1);
    reverseString(str1);
    printf("Reversed: %s\n\n", str1);
    
    // Anagram Check
    printf("=== ANAGRAM CHECK ===\n");
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    if (areAnagrams(str1, str2)) {
        printf("'%s' and '%s' are ANAGRAMS!\n", str1, str2);
    } else {
        printf("'%s' and '%s' are NOT anagrams.\n", str1, str2);
    }
    
    return 0;
}