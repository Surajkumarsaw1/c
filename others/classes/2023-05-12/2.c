#include <stdio.h>

static int n = 2;

struct book
{
    char title[100];
    char publication[100];
    char auther[50];
    int pages;
    float price;
};

int main()
{
    struct book bookarr[n];
    for (int i = 0; i < n; i++)
    {

        printf("Enter detail of book %d in order title,publication,auther,pages,price \n", i + 1);
        scanf("%s%s%s%d%f", bookarr[i].title, bookarr[i].publication, bookarr[i].auther, &bookarr[i].pages, &bookarr[i].price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n%s\n%s\n%d\n%0.2f\n\n", bookarr[i].title, bookarr[i].publication, bookarr[i].auther, bookarr[i].pages, bookarr[i].price);
    }
    return 0;
}