#include <stdio.h>

int main() {
    int size = 6,sum=0;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *pA = array;
    for (int i = 0; i < size; i++)
    {
        sum += *pA;
        pA++;
    }
    
    printf("The sum of array is: %d\n",sum);

    return 0;
}
