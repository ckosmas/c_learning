#include <stdio.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

int main (){

    Student student1 = {"Spongebob", 30, 4.0, true};
    Student student2 = {"Patrick", 35, 2.0, false};
    Student student3 = {"Squidward", 50, 3.0, false};
    Student student4 ;

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No");

    printf("%s\n", student3.name);
    printf("%d\n", student3.age);
    printf("%.2f\n", student3.gpa);
    printf("%s\n", (student3.isFullTime) ? "Yes" : "No");


    return 0;
}
