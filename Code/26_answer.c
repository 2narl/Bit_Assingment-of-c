/*Qn.26.A university assigns letter grades based on the final grade code entered by the controller.
Code	Grade
A	Excellent
B	Very Good
C	Good
D	Pass
F	Fail*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char cd; 
    printf("Final Grade Code:\n");
    printf("A:	Excellent\nB:	Very Good\nC:	Good\n");
    printf("D:	Pass\nF:	Fail\n");
    printf("Enter your Grade Code:");
    scanf("%c",&cd);
    cd=  toupper(cd);
    switch(cd){
        case 'A':
            printf("Performance: Excellent\n");
            break;
            
        case 'B':
            printf("Performance: Very Good\n");
            break;
            
        case 'C':
            printf("Performance: Good\n");
            break;
            
        case 'D':
            printf("Performance: Pass\n");
            break;
            
        case 'F':
            printf("Performance: Fail\n");
            break;
            
        default:
            printf("ERROR: Invalid grade code!\n");
            printf("Valid codes: A, B, C, D, F\n");
            break;
    
        
    }
    return 0;
}