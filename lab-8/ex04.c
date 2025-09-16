#include <stdio.h>
int num_vowels(const char *str) 
{
    int count = 0;
    for (int i=0;str[i]!='\0'; i++) 
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    char text[100];
    printf("Input: ");
    fgets(text, sizeof(text), stdin);
    int vowels = num_vowels(text);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}