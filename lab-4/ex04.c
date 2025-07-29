#include<stdio.h>
int main()
{
    int i,num,pro;

    printf("Enter a number: ");scanf("%d", &num);
    printf("Multiplication Table for %d:\n", num);

    for (i = 1; i <= 12; i++)
    {
        pro = num * i;
        printf("%d x %d = %d\n", num,i,pro);
    }
    
}