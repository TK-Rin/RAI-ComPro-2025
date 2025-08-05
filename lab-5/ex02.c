#include<stdio.h>
int main()
{
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9},i,n = 9;

    printf("Reversed Array: ");
    for(i=n-1;i>=0;i--) 
    {
        printf("%d", original[i]);
        if(i > 0) printf(", ");
    }
}