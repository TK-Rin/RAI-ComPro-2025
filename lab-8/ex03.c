#include <stdio.h>
float sum_of_squares(float,float);
int main() 
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    float result = sum_of_squares(a, b);
    printf("Sum of squares of %.2f and %.2f is %.2f\n", a, b, result);
    return 0;
}
float sum_of_squares(float x, float y) 
{
    return (x * x) + (y * y);
}