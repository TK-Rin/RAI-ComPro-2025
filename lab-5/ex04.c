#include<stdio.h>
int main()
{
    int v[10],i,e=0,o=0;
    for(i=0;i<10; i++) 
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0)
            e++;
        else
            o++;
    }
    printf("Even numbers: %d\n", e);
    printf("Odd numbers: %d\n", o);
}