#include<stdio.h>

struct book
{
	char name[20],author[20],genre[20];
}
book;
void book_info(struct book sample){
	printf("enter book name:");
	scanf("%s",sample.name);
	printf("enter author of book:");
	scanf("%s",sample.author);
	printf("enter genre of book:");
	scanf("%s",sample.genre);
	
	printf("book details:\nName:%s\nAuthor:%s\nGenre:%s\n",sample.name,sample.author,sample.genre);
	
}
int main()
{
	struct book lotd_1;
	book_info(lotd_1);
	 
	 return 0;
}
