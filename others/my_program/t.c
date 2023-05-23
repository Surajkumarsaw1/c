#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;

    x = 10;
    y = 10;

    // gotoxy(x, y);

    printf("C program to change cursor position.");
    char ch;
    for (int i = 0; i < 10; i++){
        ch = getch();
        printf("\ni = %d, ch = %c\n",i, ch);
    }
    getch();
    return 0;
    return 0;
}