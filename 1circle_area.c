#include <stdio.h>
#define pi 3.142

    // always give these 2 spaces between the line 1 and the main()
void main() {
    float radius, area;

    printf("Input circle radius:");
    scanf("%f", &radius);
    area= pi*radius* radius;
    printf("Area of the circle: %.2f\n", area);
     
}

// we are using void main, not int main because we are not returning anything in the code