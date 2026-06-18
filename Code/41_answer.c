/*41. Write a program with structure 'students' to contain name, faculty, email, 
date of birth and total marks obtained. Develop a program to read data for 
10 students and display the overall detail of students rank wise with respect to total marks.*/
#include <stdio.h>
#include <string.h>

// 1. Define the 'students' structure
struct students {
    char name[50];
    char faculty[50];
    char email[50];
    char dob[15]; 
    float total_marks;
};

int main() {
    struct students s[10], temp;
    int i, j;

    // 2. Read data for 10 students
    printf("Enter details for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Faculty: ");
        scanf(" %[^\n]", s[i].faculty);
        printf("Email: ");
        scanf("%s", s[i].email);
        printf("DOB (DD/MM/YYYY): ");
        scanf("%s", s[i].dob);
        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }

    // 3. Sort students rank-wise 
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (s[i].total_marks < s[j].total_marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // 4. Display sorted details
    printf("\n--- Student Details (Rank-wise) ---\n");
    printf("%-5s %-15s %-15s %-20s %-12s %-10s\n", "Rank", "Name", "Faculty", "Email", "DOB", "Marks");
    for (i = 0; i < 10; i++) {
        printf("%-5d %-15s %-15s %-20s %-12s %-10.2f\n", 
               i + 1, s[i].name, s[i].faculty, s[i].email, s[i].dob, s[i].total_marks);
    }

    return 0;
}
