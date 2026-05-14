/*49.	Write a program to draw:
(a) three concentric circles
(b) a right angled triangle
*/

#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize graphics drivers
    int gd = DETECT, gm;
    
    
    initgraph(&gd, &gm, "");

    
    int midX = 200;
    int midY = 200;
    
    setcolor(WHITE);
    circle(midX, midY, 50);  
    setcolor(YELLOW);
    circle(midX, midY, 80);  
    setcolor(CYAN);
    circle(midX, midY, 110); 

    
    int x1 = 400, y1 = 100; 
    int x2 = 400, y2 = 300; 
    int x3 = 550, y3 = 300; 

    setcolor(GREEN);
    
    line(x1, y1, x2, y2); 
    line(x2, y2, x3, y3); 
    line(x3, y3, x1, y1); 

    
    getch();
    
    // Close graphics mode
    closegraph();
    return 0;
}
