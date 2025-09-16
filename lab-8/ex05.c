
#include <stdio.h>
int sum_of_even(int arr[], int n);
int sum_of_odd(int arr[], int n);
int main() 
{
    int n;
    printf("N: ");scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }
    int even_sum = sum_of_even(arr, n);
    int odd_sum = sum_of_odd(arr, n);
    printf("Output: Sum of even number: %d\n", even_sum);
    printf("        Sum of odd number: %d\n", odd_sum);
    return 0;
}
int sum_of_even(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) sum += arr[i];
    }
    return sum;
}
int sum_of_odd(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 != 0) sum += arr[i];
    }
    return sum;
}
