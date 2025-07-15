#include <stdio.h>
int main()
{
    char name[20], gender[20], education_qualification[20];
    int age, weight;
    float height;

    printf("Enter your Name: "); scanf("%s", name);
    printf("Enter your Age: "); scanf("%d", &age);
    printf("Enter your height: "); scanf("%f", &height);
    printf("Enter your weight: "); scanf("%d", &weight);
    printf("Enter your gender: "); scanf("%s", gender);
    printf("Enter your Education Qualification: "); scanf("%s", education_qualification);

    printf("\nName: %s\tAge: %d\tGender: %s\n", name, age, gender);
    printf("Height: %.1f\tWeight: %d\n", height, weight);
    printf("Education: %s\n", education_qualification);
}