#include <stdio.h>
int main() 
{
    int array[] = { 1, 2, 3,
                    4, 5, 6,
                    7, 8, 9};
    int *pA = array;
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", *pA);
        pA++;
    }
    printf("--------------\n");
    

    return 0;
}