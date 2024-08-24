#include <stdio.h>

#define Pi 3.14159
#define AREA_OF_CIRCLE(radius) (Pi*(radius)*(radius))

int main(){
    float area, radius;

    printf("Enter the radius ");
    scanf("%f", &radius);

    // Calculate area
    area = AREA_OF_CIRCLE(radius);

    // Display result
    printf("The area of the circle with radius %.2f = %.2f\n", radius, area);


    system("pause");
    
}