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
	

	std::cout << "���ϱ⸦ �� ù���� ���� �Է��ϼ���" << std::endl;
	std::cin >> add_num1;

	std::cout << "���ϱ⸦ �� �ι�° ���� �Է��ϼ���" << std::endl;
	std::cin >> add_num2;
	cout << "���� ����� :"<<addTwoNumbers(add_num1, add_num2) << endl;

	std::cout << "master ���� ���� ���� �Է��ϼ���";
	std::cin >> name;

	cout << "���� �Ϸ� " << name << std::endl;
	return 0;
}