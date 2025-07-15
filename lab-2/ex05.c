#include <stdio.h>

int main()
{
    char name[50], uni[20];
    int age;
    float height;

    printf("Enter your full name: "); scanf("%[^\n]%*c", name);
    printf("Enter your age: "); scanf("%d", &age);
    printf("Enter your height: "); scanf("%f", &height);
    printf("Enter your University name: "); scanf("%s", uni);

    char first_name[50];
    int i = 0, j = 0;
    while (name[i] != ' ' && name[i] != '\0') 
    {
        first_name[j++] = name[i++];
    }
    first_name[j] = '\0';
    while (name[i] == ' ') i++;
    char last_initial = name[i];

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.\n", last_initial, first_name, uni, age, height);

    return 0;
}