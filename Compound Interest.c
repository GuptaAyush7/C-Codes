#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, ci;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time period (in years): ");
    scanf("%f", &t);
    ci = p * pow(1 + (r / 100), t);
    printf("Compound interest: %.2f", ci - p);
    return 0;
}
