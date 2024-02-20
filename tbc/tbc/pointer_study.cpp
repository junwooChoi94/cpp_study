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
		{"국어", "홍길동", 15000},
		{"영어", "이순신", 18000},
		{"수학1", "강감찬", 10000}
	};


	puts("각 교과서의 이름은 다음과 같습니다.");
	printf("%s, %s, %s\n", text_book[0].title, text_book[1].title, text_book[2].title);


	std::cout << "포인터 테스트 : " << (*text_book).author << " , " << text_book->title << " , " << (*text_book).price << std::endl;
	strcpy_s((*text_book).author, "아기장수 우투리");
	strcpy_s((*text_book).title, text_book[1].title);
	(*text_book).price = text_book[1].price;
	std::cout << "포인터 변경 후 : " << (*text_book).author << " , " << text_book->title << " , " << (*text_book).price << std::endl;
	return 0;
}