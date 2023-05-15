#include <stdio.h>

struct student{
    char name[50];
    int age;
    float height;
    int rollno;
};

int main()
{
    struct student s1,s2;
    printf("Enter detail of student 1 in order name,age,height,rollno \n");
    scanf("%s%d%f%d",s1.name, &s1.age, &s1.height, &s1.rollno);
    printf("Enter detail of student 2 in order name,age,height,rool \n");
    scanf("%s%d%f%d",s2.name, &s2.age, &s2.height, &s2.rollno);
    printf("Name: %s\nAge: %d\nHeight: %0.2f\nRollno: %d\n\n",s1.name, s1.age, s1.height, s1.rollno);
    printf("Name: %s\nAge: %d\nHeight: %0.2f\nRollno: %d\n\n",s2.name, s2.age, s2.height, s2.rollno);
    return 0;
}