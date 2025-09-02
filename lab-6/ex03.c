#include <stdio.h>
#include<math.h>

int main()
{
    struct coordinates{
        float x,y;  
    } coordinates[2];
    
    float d, result0, result1;
    printf("x1: ");scanf("%f", &coordinates[0].x);
    printf("y1: ");scanf("%f", &coordinates[0].y);
    printf("x2: ");scanf("%f", &coordinates[1].x);
    printf("y2: ");scanf("%f", &coordinates[1].y);

    result0 = pow(coordinates[1].x - coordinates[0].x, 2);
    result1 = pow(coordinates[1].y - coordinates[0].y, 2);
    d = sqrt(result0 + result1);

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)", coordinates[0].x, coordinates[0].y, coordinates[1].x, coordinates[1].y, d);
    return 0;    
}