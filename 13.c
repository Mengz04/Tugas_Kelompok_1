#include <stdio.h>
int student;

int main(){
    printf("Please enter the amount of student: \n");
    scanf("%d", &student);
    printf("The amount student(s) enrolled: %d, section(s) needed: %d, remaining student(s): %d", student, student/30, student%30);
    return 0;
}