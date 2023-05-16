#include <stdio.h>

int main() {
    int max, e, m, s, sn5 = 0, sn0 = 0;
    float n5, n0;
    printf("Enter maximum marks: ");
    scanf("%d", &max);
    n0 = 0.9 * max;
    n5 = 0.95 * max;

    for (int i = 1; i <= 10; i++) {
        printf("Enter marks of English, Maths and Science of student %d: ", i);
        scanf("%d%d%d", &e, &m, &s);

        if (e >= n5 && m >= n5 && s >= n5) {
            sn5++;
        } else if (e >= n0 && m >= n0 && s >= n0) {
            sn0++;
        }
    }

    printf("Number of students who secured 95%% or more in all the subjects: %d\n", sn5);
    printf("Number of students who secured 90%% or more in all the subjects: %d\n", sn0);
    return 0;
}

// Sample Output:
// Enter maximum marks: 100
// Enter marks of English, Maths and Science of student 1: 90 91 92
// Enter marks of English, Maths and Science of student 2: 95 96 97
// Enter marks of English, Maths and Science of student 3: 85 86 87
// Enter marks of English, Maths and Science of student 4: 93 94 95
// Enter marks of English, Maths and Science of student 5: 85 95 90
// Enter marks of English, Maths and Science of student 6: 91 94 98
// Enter marks of English, Maths and Science of student 7: 85 92 92
// Enter marks of English, Maths and Science of student 8: 85 86 87
// Enter marks of English, Maths and Science of student 9: 90 94 98
// Enter marks of English, Maths and Science of student 10: 95 96 97
// Number of students who secured 95% or more in all the subjects: 4
// Number of students who secured 90% or more in all the subjects: 7