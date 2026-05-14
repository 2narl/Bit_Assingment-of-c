/*28. Write an interactive program that converts pounds and ounces to kilograms and grams.
 Use symbolic constants that are defined at the top of the file outside of main ()*/
#include <stdio.h>
#define lb_kg 0.45359237
#define oz_lb 16


int main(){
    float pound, ounses, gram;
    float total_lb, total_kg;
    int kg;
    printf("Pound/Ounces Convert to Kilogram/Gram:\n");

    printf("Enter weight in pounds: ");
    scanf("%f", &pound);
    printf("Enter weight in ounces: ");
    scanf("%f", &ounses);
    
    total_lb = pound + (ounses / oz_lb);
    
    total_kg = total_lb * lb_kg;
    kg =(int)total_kg;
    gram =(total_kg - kg) * 1000;
    
    printf("\n%.2f Pounds and %.2f Ounces is equal to:\n", pound, ounses);
    printf("%d KG and %.3f Gram\n", kg, gram);
    
    return 0;
}
