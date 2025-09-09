#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 5;
    int *pA = &b, *pB = &a;
    printf("Before reverse: a = %d, b = %d\n",a,b);
    printf("After reverse: a = %d, b = %d\n",*pA,*pB);
    return 0;
}