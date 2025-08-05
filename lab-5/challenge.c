#include<stdio.h>
int main()
{

    int n;
    printf("Input:\n");
    printf("Enter number of elements: ");scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int counted[n];
    for(int i = 0; i < n; i++) counted[i] = 0;

    printf("\nOutput:\n");
    for(int i = 0; i < n; i++) 
    {
        if(counted[i])
        {
            continue;
        }
        int count = 1;
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[j] == arr[i]) 
            {
                count++;
                counted[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }
    return 0;
}