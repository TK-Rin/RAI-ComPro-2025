#include<stdio.h>
#include<string.h>

int main()
{
    int i,num;
    char winner[100];
    float highest;

    struct profile {
    char name[100];
    int age;
    float score;
    } student[3];

    for (i=0,num=1;i<3;i++)   
    {
        printf ("Student %d's name: ",num);
        scanf ("%s",student[i].name);
        printf ("Student %d's age: ",num);
        scanf ("%d",&student[i].age);
        printf ("Student %d's score: ",num);
        scanf ("%f",&student[i].score);
        num++;
    }

    highest = student[0].score;
    strcpy(winner, student[0].name);
    for (i = 1; i < 3; i++) {
        if (student[i].score > highest) {
            highest = student[i].score;
            strcpy(winner, student[i].name);
        }
    }
    printf("The highest score belongs to %s at %.2f scores!\n", winner, highest);

    return 0;
}