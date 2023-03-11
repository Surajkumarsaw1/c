#include <stdio.h>

int main() {

    int phy, chem, bio;
    float avg;
    printf("Enter marks of phy, chem and respectivly : ");
    scanf("%d%d%d",&phy,&chem,&bio);
    avg = (phy+chem+bio)/3;
    // printf("%f",avg);
    if (avg >= 80){
        printf("Distinction\n");
    }
    else if(avg >= 60){
        printf("First Division\n");
    }
    else if (avg >= 60){
        printf("Second Division\n");
    }
    else if (avg >= 45){
        printf("Pass\n");
    }
    else if (avg < 40){
        printf("Promotion not granted\n");
    }
    return 0;
}