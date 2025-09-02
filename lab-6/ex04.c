#include <stdio.h>
#include<math.h>

int main()
{
    float sumx,sumy;
    struct vectors{
        float x,y; 
    } vectors[2];
    printf("u_x: ");scanf("%f",&vectors[0].x);
    printf("u_y: ");scanf("%f",&vectors[0].y);
    printf("V_x: ");scanf("%f",&vectors[1].x);
    printf("V_y: ");scanf("%f",&vectors[1].y);

    sumx = vectors[0].x+vectors[1].x;
    sumy = vectors[0].y+vectors[1].y;

    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", sumx,sumy);
    return 0;
}