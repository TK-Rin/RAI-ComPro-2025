#include<stdio.h>
int main()
{
    int i;
    
    do
    {
        printf("Enter the number: ");scanf("%d", &i);
        
        if (i == 0) {
            break;
        }
        if (i % 2 == 0)
        {
            printf("%d is even.\n", i);
        }
        else
        {
            printf("%d is odd.\n", i);
        }
        
    } while (i!=0);
    
    printf("Exiting Program... Bye\n");
    return 0;
}