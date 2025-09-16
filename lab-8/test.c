#include<stdio.h>
#include<math.h>
float triangle_area(float);
float a,b,c;
int main()
{ 
    float s,area;
    printf("What's your A side: "); scanf("%f",&a);
    printf("What's your B side: "); scanf("%f",&b);
    printf("What's your C side: "); scanf("%f",&c);
    s = (a+b+c)/2;
    area=triangle_area(s);
    printf("Your triangle has area of: %.2f\n", area);
    return 0;
}
float triangle_area(float n)
{
    float area;
    area=sqrtf(n*(n-a)*(n-b)*(n-c));
    return area;
}