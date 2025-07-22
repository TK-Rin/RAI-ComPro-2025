#include <stdio.h>

int main() {
    int n, i;
    int score[10];
    char name[10][20];
    char grade;
    float num_grade, total = 0.0;

    printf("Enter number of subjects (max 10): ");scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter subject %d: ", i+1);scanf("%s", name[i]);
        printf("Enter %s score: ", name[i]);scanf("%d", &score[i]);
    }

    printf("\nSubject        Score     Grade   Grade$\n");
    printf("-------------------------------$\n");

    for (i = 0; i < n; i++) {
        if (score[i] >= 80) {
            grade = 'A'; num_grade = 4.0;
        } else if (score[i] >= 70) {
            grade = 'B'; num_grade = 3.0;
        } else if (score[i] >= 60) {
            grade = 'C'; num_grade = 2.0;
        } else if (score[i] >= 50) {
            grade = 'D'; num_grade = 1.0;
        } else {
            grade = 'E'; num_grade = 0.0;
        }
        printf("%-15s%-9d%-7c%.1f$\n", name[i], score[i], grade, num_grade);
        total += num_grade;
    }

    printf("\nGPA: %.1f$\n", total/n);
}