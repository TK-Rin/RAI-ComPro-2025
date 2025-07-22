#include <stdio.h>
int main()
{
    int num, max_range=100, min_range=1;
    printf("Enter a number: ");scanf("%d",&num);

    if ((num % 2 == 0) && (num < max_range && num > min_range))
    {
        printf("%d is even\n", num);
    }
    else if ((num % 2 != 0) && (num < max_range && num > min_range))
    {
        printf("%d is odd\n", num);
    }
    else if (num > max_range || num < min_range)
    {
        printf("%d is out of range\n", num);
    }
    
    return 0;
}