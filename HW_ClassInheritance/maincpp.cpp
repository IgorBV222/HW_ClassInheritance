#include <string>
#include <iostream>
#include "Human.h"


int main() {
	setlocale(LC_ALL, "Russian");


	Human h ("��������", "�������");
	People p ("������", "������");
	Person t ("����", 21);
	
	std::cout << "�������: " << std::endl;
	std::cout << "���� - " << h.getRace() << std::endl;
	std::cout << "��� - " << h.getGender() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << "����: " << std::endl;
	std::cout << "������ - " << p.getCountry() << std::endl;
	std::cout << "����������� - " << p.getEducation() << std::endl;
	std::cout << "���� - " << p.getRace() << std::endl;

	std::cout << "-------------------------------------------" << std::endl;


	std::cout << "�������: " << std::endl;
	std::cout << "��� - " << t.getName() << std::endl;
	std::cout << "������� - " << t.getAge() << std::endl;
	std::cout << "���� - " << t.getRace() << std::endl;
	std::cout << "����������� - " << t.getEducation() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

}