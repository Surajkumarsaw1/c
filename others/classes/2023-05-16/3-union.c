#include <stdio.h>

union student{
    char name[40];
    int age;
};

int main() {
    union student s1 = {"Suraj"}; // Can only initialize 1 part of union
    printf("Name %s\n",s1.name);
    printf("Age %d\n",s1.age);
    return 0;
}