#include <stdio.h>

struct Distance{
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches =d1.inches +d2.inches;
    result.feet = d1.feet + d2.feet + (int)(result.inches/12);
    result.inches = (int)result.inches % 12 + (result.inches - (int)result.inches);
    return result;
};

int main(){
    struct Distance d1, d2, result;

    // Input first distance
    printf("Enter information for 1st distance\n");
    printf("Enter Feet\n");
    scanf("%d", &d1.feet);
    printf("Enter inche\n");
    scanf("%f", &d1.inches);

    // Input second distance
    printf("Enter information for 2nd distance\n");
    printf("Enter Feet\n");
    scanf("%d", &d2.feet);
    printf("Enter inche\n");
    scanf("%f", &d2.inches);

    // Add distances
    result = addDistances(d1, d2);

    // Display result
    printf("Sum of distances = %d feet %.2f inches\n", result.feet, result.inches);

    system("pause");
    
}