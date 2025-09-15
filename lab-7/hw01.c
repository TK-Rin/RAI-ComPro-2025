#include <stdio.h>
int main() 
{
    int array[] = { 1, 2, 3,
                    4, 5, 6,
                    7, 8, 9};
    int *pA = array;
    for (int i = 0; i < 9; i++)
    {
        printf("%d", *pA);
        pA++;
    }
    printf("\n--------------\n");

    float x = 1.1;
	float y = 2.2;
    float *pX = &y, *pY = &x;
    printf("x=%f\ty=%f1",*pX,*pY);
    printf("\n--------------\n");

    struct S {
    int a, b, c;
    };
    
    struct S s;
    int *pC = &s.c;

    printf("Enter first number: ");
    scanf("%d", &s.a);
    printf("Enter second number: ");
    scanf("%d", &s.b);

    *pC = s.a + s.b;

    printf("Sum = %d\n", s.c);

    return 0;
}