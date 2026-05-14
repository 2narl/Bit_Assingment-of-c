/*48.	Write a program to draw a square and an ellipse using graphics functions*/

#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    //  Initialize graphics mode
    
    initgraph(&gd, &gm, "");

    // Draw a Square
    
    rectangle(100, 100, 200, 200);

    //Draw an Ellipse

    ellipse(400, 150, 0, 360, 80, 40);

    //  Wait for user input and close
    getch();
    closegraph();
    
    return 0;
}
