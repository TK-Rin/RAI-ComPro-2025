#include <stdio.h>
int main()
{
    int int_1;
    float float_1;
    char char_1[10];

    printf("Please enter an integer value: "); 
    scanf("%d", &int_1); 
    printf("You entered %d\n", int_1);
    printf("Please enter a float value: "); 
    scanf("%f", &float_1); 
    printf("You entered %f\n", float_1);
    printf("Please enter a character: "); 
    scanf("%s", char_1); 
    printf("You entered %s\n", char_1);

    return 0;
}