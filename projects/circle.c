#include <math.h>
#include <stdio.h>

#define PI 3.1415926535897932385 // An approximate value of PI

int main(void) {

    double radius;
    double area;
    double surface_area;
    double volume;

    printf("Please enter the radius of your sphere(don't mention units): ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);                 // Area is pi * r ^ 2
    surface_area = 4 * PI * pow(radius, 2);     // Surface area is 4 * pi * r ^ 2
    volume = (4.0 / 3.0) * PI * pow(radius, 3); // Volume is 4 / 3 * pi * r ^ 3

    printf("Its area is %lf\n", area);
    printf("Its surface area is %lf\n", surface_area);
    printf("Its volume is %lf\n", volume);

    return 0;
}