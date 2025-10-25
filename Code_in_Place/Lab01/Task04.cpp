// WAP to calculate the medical dosage of a patient based on their weight.
#include <stdio.h>

int main()
{
    // Declare variables for weight and dosage
    float weight, dosage;

    // Take weight input from user
    printf("Enter patient's weight in kg: ");
    scanf("%f", &weight);

    // Calculate dosage (0.8 mg per kg)
    dosage = weight * 0.8;

    // Display result
    printf("Dosage according to the patient's weight is: %.2f mg", dosage);

    return 0;
}
