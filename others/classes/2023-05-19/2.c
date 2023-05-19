#include <stdio.h>

int main() {
    struct student {
        char name[20];
        int rollno;
    };

    struct student s1, *p;
    p = & s1;

    printf("Enter name and Rollno\n");
    scanf("%s%d",p->name, p->rollno);

    printf("Name of student is %s\n",p->name);
    printf("Rollno. of student is %d\n",p->rollno);
    return 0;
}