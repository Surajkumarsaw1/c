#include <stdio.h>

int main() {
    float height=0,pole,attempts=0,prev=0;
    printf("Enter the height of pole : ");
    scanf("%f",&pole);

    while ( height <= pole ){
        prev = height;
        height += 5 - (prev)*0.02; // height = height + 5 - (height*0.02)
        // printf("height : %f\n",height);
        attempts+=1;
    }
    printf("Attemps : %.0f\n",attempts);
    return 0;
}
