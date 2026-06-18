/*45.	Write a program using file to copy all contents from one file to another.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char ch;

    
    src = fopen("C Assignment.docx", "r");
    if (src == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    
    dest = fopen("my.docx", "w");
    if (dest == NULL) {
        printf("Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    
    fclose(src);
    fclose(dest);
    return 0;
}
