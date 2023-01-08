#include <string>
#include <iostream>
#include "Human.h"


int main() {
	setlocale(LC_ALL, "Russian");


	Human h ("европеец", "мужчина");
	People p ("Россия", "высшее");
	Person t ("Егор", 21);
	
	std::cout << "Человек: " << std::endl;
	std::cout << "Раса - " << h.getRace() << std::endl;
	std::cout << "Пол - " << h.getGender() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << "Люди: " << std::endl;
	std::cout << "Страна - " << p.getCountry() << std::endl;
	std::cout << "Образование - " << p.getEducation() << std::endl;
	std::cout << "Раса - " << p.getRace() << std::endl;

	std::cout << "-------------------------------------------" << std::endl;


	std::cout << "Персона: " << std::endl;
	std::cout << "Имя - " << t.getName() << std::endl;
	std::cout << "Возраст - " << t.getAge() << std::endl;
	std::cout << "Раса - " << t.getRace() << std::endl;
	std::cout << "Образование - " << t.getEducation() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

}