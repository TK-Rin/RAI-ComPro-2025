#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter integer #1: ");scanf("%d", &a);
    printf("Enter integer #2: ");scanf("%d", &b);
    printf("Enter integer #3: ");scanf("%d", &c);
    
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    int sum = a + b + c;
    float avg = sum / 3.0;

    printf("\nResults:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}