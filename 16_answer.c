/*16. Write a program to find out factorial of any number (Use while Loop).*/
#include <stdio.h>
int main(){
    int n, fact =1;
    //input number from user
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    
    if (n>=0){
        while(i<=n){ //using while loop
        fact *=i;
        i++;
        }
        printf("Factorial of %d is: %d\n",n ,fact);
        
    }else{
        //if number is  less then 0 then 
        printf("Factorial of negative numbers is not defined.");
    }
    
    return 0;
}