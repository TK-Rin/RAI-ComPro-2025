#include <stdio.h>
int main()
{

    float radius, pi, area, length, resistivity,R_value;
    pi = 22/7; // pi = 3.14;
    printf ("Enter Radius of Resistor : ");
    scanf ("%f",&radius);
    printf ("Enter Length of Resistor : ");
    scanf ("%f",&length);
    printf ("Enter Resistivity of Resistor : ");
    scanf ("%f",&resistivity);
    area = pi * radius * radius;
    R_value = resistivity*length/area;
    printf ("The value off this resistor = %0.2f",R_value);
    return 0;

}