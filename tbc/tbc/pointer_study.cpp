#include <stdio.h>
#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGSS
//#include <string>
struct book
{
	char title[30];
	char author[30];
	int price;

};

int main(void)
{

	struct book text_book[3] =
	{
		{"����", "ȫ�浿", 15000},
		{"����", "�̼���", 18000},
		{"����1", "������", 10000}
	};


	puts("�� �������� �̸��� ������ �����ϴ�.");
	printf("%s, %s, %s\n", text_book[0].title, text_book[1].title, text_book[2].title);


	std::cout << "������ �׽�Ʈ : " << (*text_book).author << " , " << text_book->title << " , " << (*text_book).price << std::endl;
	strcpy_s((*text_book).author, "�Ʊ���� ������");
	strcpy_s((*text_book).title, text_book[1].title);
	(*text_book).price = text_book[1].price;
	std::cout << "������ ���� �� : " << (*text_book).author << " , " << text_book->title << " , " << (*text_book).price << std::endl;
	return 0;
}