#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

float calc_average(int grades[], int n);
int find_highest(int grades[], int n);
int find_lowest(int grades[], int n);
void print_passed(char names[][NAME_LEN], int grades[], int n);

int main() {
    int n;
    char names[MAX_STUDENTS][NAME_LEN];
    int grades[MAX_STUDENTS];

    printf("Enter number of students: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter name of student %d: ", i + 1); scanf(" ");
        for (int j = 0; j < NAME_LEN - 1; j++) 
        {
            char c = getchar();
            if (c == '\n' || c == EOF) 
            {
                names[i][j] = '\0';
                break;
            }
            names[i][j] = c;
            if (j == NAME_LEN - 2) names[i][j + 1] = '\0';
        }
        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", calc_average(grades, n));
    printf("Highest grade: %d\n", find_highest(grades, n));
    printf("Lowest grade: %d\n", find_lowest(grades, n));
    printf("\nStudents who passed:\n");
    print_passed(names, grades, n);

    return 0;
}

float calc_average(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += grades[i];
    return n ? (float)sum / n : 0.0f;
}

int find_highest(int grades[], int n) {
    int max = grades[0];
    for (int i = 1; i < n; i++)
        if (grades[i] > max)
            max = grades[i];
    return max;
}

int find_lowest(int grades[], int n) {
    int min = grades[0];
    for (int i = 1; i < n; i++)
        if (grades[i] < min)
            min = grades[i];
    return min;
}

void print_passed(char names[][NAME_LEN], int grades[], int n) {
    for (int i = 0; i < n; i++)
        if (grades[i] >= 60)
            printf("%s\n", names[i]);
}