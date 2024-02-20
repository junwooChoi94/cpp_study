#include <iostream>
#include <string> 
//#include "Header.h"
using namespace std;


int addTwoNumbers(int num_a, int num_b) {
	int sum = num_a + num_b;
	return sum;
}

int main() {
	std:string name;
	int add_num1, add_num2;
	

	std::cout << "더하기를 할 첫번쨰 수를 입력하세요" << std::endl;
	std::cin >> add_num1;

	std::cout << "더하기를 할 두번째 수를 입력하세요" << std::endl;
	std::cin >> add_num2;
	cout << "합한 결과는 :"<<addTwoNumbers(add_num1, add_num2) << endl;

	std::cout << "master 에게 전할 말을 입력하세요";
	std::cin >> name;

	cout << "전달 완료 " << name << std::endl;
	return 0;
}