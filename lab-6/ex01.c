#include<stdio.h>

int main()
{
    int i,num;
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
        scanf ("%f\n",&student[i].score);
        num++;
    }

    for (i=0,num=1;i<3;i++)
    {
        printf("\nStudent %d name is \"%s\", age %d.",num,student[i].name,student[i].age);
        num++;
    }

    return 0;
}