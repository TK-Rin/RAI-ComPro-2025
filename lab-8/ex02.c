#include <stdio.h>
int is_prime(int);
int main() 
{
    int alpha,omega;
    printf("Enter the start and end numbers: "); scanf("%d %d",&alpha,&omega);
    for (int i = alpha; i <= omega; i++) 
    {
        if (is_prime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
int is_prime(int n) 
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return 0;
    }
    return 1;
}