#include<stdio.h>
int main()
{
    int i, num, sum = 0;
    float avg;

    for (i = 1; i <= 10; i++)
    {
        printf("%d. Enter the number: ", i);scanf("%d", &num);
        sum += num;
    }

    avg = sum / 10.0;

    printf("\ntotal sum is %d\n", sum);
    printf("Average is %.2f\n", avg);
    
    return 0;
}