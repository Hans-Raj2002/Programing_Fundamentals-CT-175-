#include<stdio.h>

struct book
{
	char title[50];
	char author[50];
	float price;
	
};

int main()
{
	struct book b1;
	printf("enter book title: ");
	fgets(b1.title,sizeof(b1.title),stdin);
	printf("enter author of book: ");
	fgets(b1.author,sizeof(b1.author),stdin);
	printf("enter price: ");
	scanf("%f",&b1.price);
	
	printf("Title: %s\n",b1.title);
	printf("Author: %s\n",b1.author);
	printf("Price: %.2f",b1.price);
	return 0;
	
}
