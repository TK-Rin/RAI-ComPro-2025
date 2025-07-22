#include <stdio.h>
int main()
{
    float a,b,c;
    int pi = 22/7;
        printf("Enter Radius of Resistor (m): ");scanf("%f", &a);
        printf("Enter Length of Resistor (m): ");scanf("%f", &b);
        printf("Resistivity of Resistor: ");scanf("%f", &c);

        float d=(c*b)/(a*a*pi);
        printf("The value of this resistor = %.2f OHM\n", d);
    return 0;
}