#include <stdio.h>

struct book{
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main()
{
	int i;
    struct book b[3];
    for(i=0;i<3;i++)
	{
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s",b[i].title);

        printf("Author: ");
        scanf("%s",b[i].author);

        printf("Number of pages: ");
        scanf("%d", &b[i].pages);

        printf("Price: ");
        scanf("%f", &b[i].price);

        

    }

    for(i=0;i<3;i++)
	{
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Pages: %d\n", b[i].pages);
        printf("Price: %.2f\n\n", b[i].price);
    }

    return 0;
}

