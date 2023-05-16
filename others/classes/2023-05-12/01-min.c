#include <stdio.h>

struct student {
    char name[50];
    int age;
    float height;
    int rollno;
};

int main() {
    struct student s1, s2;
    printf("Enter details of student 1 in order: name, age, height, roll no.\n");
    scanf("%s%d%f%d", s1.name, &s1.age, &s1.height, &s1.rollno);
    printf("Enter details of student 2 in order: name, age, height, roll no.\n");
    scanf("%s%d%f%d", s2.name, &s2.age, &s2.height, &s2.rollno);
    
    printf("Student 1:\nName: %s\nAge: %d\nHeight: %.2f\nRoll No.: %d\n\n", s1.name, s1.age, s1.height, s1.rollno);
    printf("Student 2:\nName: %s\nAge: %d\nHeight: %.2f\nRoll No.: %d\n\n", s2.name, s2.age, s2.height, s2.rollno);
    
    return 0;
}

/* Output:
Enter details of student 1 in order: name, age, height, roll no.
John
18
5.8
10
Enter details of student 2 in order: name, age, height, roll no.
Jane
19
5.6
11
Student 1:
Name: John
Age: 18
Height: 5.80
Roll No.: 10

Student 2:
Name: Jane
Age: 19
Height: 5.60
Roll No.: 11
*/