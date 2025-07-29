#include<stdio.h>
int main()
{
    int i=1, num, sum=0;

    while (i<=10)
    {
        printf("%d. Enter the number: ", i);scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("\nTotal sum is %d\n", sum);
    
    return 0;
}