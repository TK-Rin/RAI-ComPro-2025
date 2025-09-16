#include<stdio.h>
#include<math.h>
float circumference_circle(float);
float area_circle(float);
int main()
{
    float radius;
    printf("Enter the radius in cm: "); scanf("%f", &radius);
    printf("Circumference: %.2f\n", circumference_circle(radius));
    printf("Area: %.2f\n", area_circle(radius));
    return 0;
}
float circumference_circle(float r)
{
    float result;
    result = 2*22.0/7.0*r;
    return result;
}
float area_circle(float r)
{
    float result;
    result = 22.0/7.0*r*r;
    return result;
}