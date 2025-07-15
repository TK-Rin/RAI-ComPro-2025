#include <stdio.h>
int main()
{
    char name[10];
    int stu_id;
    float Pro_score, Phy_score, Cal_score, GPA;

    printf("Enter your Name: "); scanf("%s", name);
    printf("Enter your student ID: "); scanf("%d", &stu_id);
    printf("Enter your Programming score: "); scanf("%f", &Pro_score);
    printf("Enter your Physics score: "); scanf("%f", &Phy_score);
    printf("Enter your Calculus score: "); scanf("%f", &Cal_score);

    GPA = (Pro_score+Phy_score+Cal_score)/3;
    printf("Hi %s(%d)! Your GPA is %.2f\n", name,stu_id,GPA);
}