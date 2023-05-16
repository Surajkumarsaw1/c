#include <stdio.h>

#define MAX_BOOKS 2

struct book {
    char title[100];
    char publication[100];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct book bookarr[MAX_BOOKS];
    
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("Enter details of book %d in order: title, publication, author, no. of pages, price\n", i+1);
        scanf("%s%s%s%d%f", bookarr[i].title, bookarr[i].publication, bookarr[i].author, &bookarr[i].pages, &bookarr[i].price);
    }
    
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("%s\n%s\n%s\n%d\n%.2f\n\n", bookarr[i].title, bookarr[i].publication, bookarr[i].author, bookarr[i].pages, bookarr[i].price);
    }
    
    return 0;
}

/* Output
Enter details of book 1 in order: title, publication, author, no. of pages, price
C Programming
ABC Publishers
John Doe
500
35.50
Enter details of book 2 in order: title, publication, author, no. of pages, price
Calculus
XYZ Publications
Jane Doe
750
42.99
C Programming
ABC Publishers
John Doe
500
35.50
Calculus
XYZ Publications
Jane Doe
750
42.99
*/