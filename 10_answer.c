/*10.	Compute the total labor cost for building wall of 50 meter long, 0.2 meter wide and 7 meter tall. The length of a brick is 10cm, height is 8cm and width is 6cm. Cost of one brick join in 1.50 paisa. (Assume the thickness of mortar is negligible.)*/
#include <stdio.h>

int main() {
    // Wall dimensions in meters
    double wallLength = 50.0, wallWidth = 0.2, wallHeight = 7.0;
    
    // Brick dimensions converted to meters (cm to m)
    double brickLength = 0.10; // 10cm
    double brickWidth = 0.06;  // 6cm
    double brickHeight = 0.08; // 8cm
    
    // Cost per brick join
    double costPerBrick = 1.50;

    // Calculate volumes
    double wallVolume = wallLength * wallWidth * wallHeight;
    double brickVolume = brickLength * brickWidth * brickHeight;

    // Calculate number of bricks
    double numberOfBricks = wallVolume / brickVolume;

    // Calculate total labor cost in NEP rupees
    double totalCost = (numberOfBricks * costPerBrick)/100;

    // Output results
    printf("Wall Volume: %.2f cubic meters\n", wallVolume);
    printf("Number of bricks required: %.0f\n", numberOfBricks);
    printf("Total Labor Cost: Rs.%.2f\n", totalCost);

    return 0;
}
