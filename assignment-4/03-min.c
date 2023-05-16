#include <stdio.h>

int main() {
    int phy, chem, bio;
    float avg;
    printf("Enter marks of Physics, Chemistry, and Biology respectively: ");
    scanf("%d%d%d", &phy, &chem, &bio);

    // Calculating the average of three subjects
    avg = (phy + chem + bio) / 3.0;

    // Determining the division based on the average
    if (avg >= 80) {
        printf("Distinction\n");
    }
    else if (avg >= 60) {
        printf("First Division\n");
    }
    else if (avg >= 50) {
        printf("Second Division\n");
    }
    else if (avg >= 40) {
        printf("Pass\n");
    }
    else {
         printf("Fail\n");
    }
    return 0;
}

// Output:
// Enter marks of Physics, Chemistry, and Biology respectively: 70 80 90
// First Division