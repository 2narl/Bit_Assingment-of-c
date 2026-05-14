/*43.	Write a program to input 10 employee records (Emp_id, Emp_name, Emp_salary) and store them in
a data file named Emp.dat. Display the information of the employee who gets the highest salary.*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure to store employee records
struct Employee {
    int Emp_id;
    char Emp_name[50];
    float Emp_salary;
};

int main() {
    struct Employee emp[10], highest, temp;
    FILE *fptr;
    int i;

    // Input 10 employee records
    printf("Enter details for 10 employees:\n");
    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].Emp_id);
        printf("Enter Name: ");
        scanf("%s", emp[i].Emp_name);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].Emp_salary);
    }

    // Store records in a data file named Emp.dat
    fptr = fopen("Emp.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fwrite(emp, sizeof(struct Employee), 10, fptr);
    fclose(fptr);

    // Read from file and find the highest salary
    fptr = fopen("Emp.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Initialize highest with the first record from the file
    fread(&highest, sizeof(struct Employee), 1, fptr);

    // Compare with the remaining 9 records
    for (i = 1; i < 10; i++) {
        fread(&temp, sizeof(struct Employee), 1, fptr);
        if (temp.Emp_salary > highest.Emp_salary) {
            highest = temp;
        }
    }
    fclose(fptr);

    // 4. Display information of the employee with the highest salary
    printf("\nEmployee with the Highest Salary:\n");
    printf("ID: %d\n", highest.Emp_id);
    printf("Name: %s\n", highest.Emp_name);
    printf("Salary: %.2f\n", highest.Emp_salary);

    return 0;
}
