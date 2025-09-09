#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 4

const char *subject_names[NUM_SUBJECTS] = {"Math", "English", "Science", "History"};

typedef struct {
    char name[21];
    int id;
    int grades[NUM_SUBJECTS];
    float average;
} Student;

int main() {
    Student students[NUM_STUDENTS];
    float subject_totals[NUM_SUBJECTS] = {0};
    int i, j;

    // Input
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%20s %d %d %d %d %d", students[i].name, &students[i].id,
              &students[i].grades[0], &students[i].grades[1],
              &students[i].grades[2], &students[i].grades[3]);
    }

    // Calculate averages
    for (i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (j = 0; j < NUM_SUBJECTS; j++) {
            sum += students[i].grades[j];
            subject_totals[j] += students[i].grades[j];
        }
        students[i].average = sum / (float)NUM_SUBJECTS;
    }

    // Find top student
    int top_student_idx = 0;
    for (i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].average > students[top_student_idx].average) {
            top_student_idx = i;
        }
    }

    // Calculate subject averages and find top subject
    float subject_averages[NUM_SUBJECTS];
    int top_subject_idx = 0;
    for (j = 0; j < NUM_SUBJECTS; j++) {
        subject_averages[j] = subject_totals[j] / NUM_STUDENTS;
        if (subject_averages[j] > subject_averages[top_subject_idx]) {
            top_subject_idx = j;
        }
    }

    // Output
    printf("\nStudent Averages:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, students[i].average);
    }

    printf("\nTop Student: %s with %.2f\n", students[top_student_idx].name, students[top_student_idx].average);

    printf("\nSubject Averages:\n");
    for (j = 0; j < NUM_SUBJECTS; j++) {
        printf("%s: %.2f\n", subject_names[j], subject_averages[j]);
    }

    printf("\nTop Subject: %s with average %.2f\n", subject_names[top_subject_idx], subject_averages[top_subject_idx]);

    return 0;
}