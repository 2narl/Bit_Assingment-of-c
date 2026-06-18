/*47.	Write a C program using the BGI graphics library (graphics.h)
 to draw two concentric circles centered at the middle of the screen.
  The circles should have radii of 100, and 50 pixels respectively.*/

#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x_center, y_center;

    // Initialize the graphics system
    initgraph(&gd, &gm, "");

    // Calculate center coordinates
    x_center = getmaxx() / 2;
    y_center = getmaxy() / 2;

    // Draw the circles
    circle(x_center, y_center, 100); // Outer
    circle(x_center, y_center, 50);  // Inner

    getch();
    closegraph();
    return 0;
}
