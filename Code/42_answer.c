/*42.	A college needs to maintain the following information for its students:
o	Student code (integer)
o	Student name (max 40 chars)
o	Age (integer)
o	Total Fee (integer)
o	Address (max 100 chars)
o	Age (integer) [duplicate listed]
Write a program using structure to input records of N students, arrange them in alphabetical order, and display the records.*/
#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int studentCode;
    char name[41]; // 40 chars + 1 for null terminator
    int age;
    int totalFee;
    char address[101]; // 100 chars + 1 for null terminator
};

int main() {
    int n, i, j;
    struct Student temp;

    printf("Enter the number of students (N): ");
    scanf("%d", &n);

    struct Student s[n];

    // Input records
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Code: ");
        scanf("%d", &s[i].studentCode);
        printf("Name: ");
        scanf(" %[^\n]s", s[i].name); 
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Fee: ");
        scanf("%d", &s[i].totalFee);
        printf("Address: ");
        scanf(" %[^\n]s", s[i].address); 
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                // Swap the structures
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display sorted records
    printf("\nStudent Records Sorted by Name:\n");
    
    printf("%-10s %-20s %-5s %-10s %-s\n", "Code", "Name", "Age", "Fee", "Address");
    
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-5d %-10d %-s\n", 
               s[i].studentCode, s[i].name, s[i].age, 
               s[i].totalFee, s[i].address);
    }
    

    return 0;
}
