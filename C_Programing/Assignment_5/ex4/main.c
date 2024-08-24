#include <stdio.h>

struct Sstudent {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct Sstudent students[10];
    int i;

    // Input data for 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter name for student %d: ", i + 1);
        getchar(); // To consume the newline character left by previous input
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].mark);
        printf("\n");
    }

    // Display data for 10 students
    printf("\nDisplaying Information of Students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n\n", students[i].mark);
    }

    system("pause");

}