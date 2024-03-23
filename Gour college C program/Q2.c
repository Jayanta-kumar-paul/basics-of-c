#include <stdio.h>

int main() {
    int distanceKm;
    printf("Enter the distance between two cities (in kilometers): ");
    scanf("%d", &distanceKm);

    // Conversion factors (all integers)
    const int metersPerKm = 1000;
    const int feetPerMeter = 3281;
    const int inchesPerFoot = 12;
    const int cmPerMeter = 100;

    // Convert to meters
    int distanceMeters = distanceKm * metersPerKm;

    // Convert to feet
    int distanceFeet = distanceMeters * feetPerMeter;

    // Convert to inches
    int distanceInches = distanceFeet * inchesPerFoot;

    // Convert to centimeters
    int distanceCm = distanceMeters * cmPerMeter;

    printf("Distance in meters: %d m\n", distanceMeters);
    printf("Distance in feet: %d ft\n", distanceFeet);
    printf("Distance in inches: %d in\n", distanceInches);
    printf("Distance in centimeters: %d cm\n", distanceCm);

    return 0;
}
