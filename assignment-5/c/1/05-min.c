#include <stdio.h>

int main() {
    int i;
    printf("\nS = 2 - 4 + 6 - 8 + ...... - 20 \n");
    float s = 0;
    for (i = 1; i * 2 <= 20; i++) {
        if (i % 2 != 0) {
            s += i * 2;
        } else {
            s -= i * 2;
        }
    }
    printf("\nSum of the Series: %f\n", s);
    return 0;
}
// Output:
// S = 2 - 4 +