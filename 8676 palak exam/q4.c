#include <stdio.h>
 // For using the value of pi

int main() {
    double r, volume;

    // Input the radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);

    // Calculate the volume using the formula
    volume = (4.0 / 3.0) * MPI * pow(r, 3);

    // Output the result
    printf("The volume of the sphere is: %.2lf\n", volume);

    return 0;
}

