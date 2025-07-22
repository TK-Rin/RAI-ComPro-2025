#include <stdio.h>
int main()
{
    float pi = 22.0/7.0, vc, h, r;
    printf("Enter cone hight: ");scanf("%f", &h);
    printf("Enter cone base radius: ");scanf("%f", &r);

    vc = (1.0/3.0) * pi * (r * r) * h;
    printf("Cone volume = %.1f\n", vc);

    if (vc > 260)
    {
        printf("This cone is perfect for Supun project\n");
    }
    else
    {
        printf("This cone is not fit for this project\n");
    }
}