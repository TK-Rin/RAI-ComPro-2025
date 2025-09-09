#include <stdio.h>

int main() {
    int array[] = { 3, 1, 2, 4, 5, 6 }, a;
    int *pA = array;
    for (int i = 0; i < 6; i++)
    {
        a = *pA;
        if (*pA > a)
        {
            *pA = a;
        }
        pA++;
    }
    
    printf("Max value: %d\n", a);
    return 0;
}
