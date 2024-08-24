#include <stdio.h>

struct Sstudent {
    char name[50];
    int roll;
    float mark;
};

int main(){
    struct Sstudent student;
//input
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks: ");
    scanf("%f", &student.mark);
//output
    printf("\nDisplaying Information:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.mark);

    system("pause");
    
}