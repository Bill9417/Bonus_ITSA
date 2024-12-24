#include <stdio.h>

void bmi(int weight, int height) {
    // Convert height from centimeters to meters
    float height_in_meters = (float)height / 100.0;
    
    // Calculate BMI
    float bmi_value = (float)weight / (height_in_meters * height_in_meters);
    
    // Print BMI value with two decimal places
    printf("%.2f\n", bmi_value);
}

int main() {
    int weight, height;
    
    // Input weight (in kg) and height (in cm)
    //printf("Enter weight (kg) and height (cm): ");
    scanf("%d %d", &weight, &height);
    
    // Call the BMI function
    bmi(weight, height);
    
    return 0;
}
