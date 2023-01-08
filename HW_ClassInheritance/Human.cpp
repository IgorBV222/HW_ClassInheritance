#include "Human.h"

Human::Human(){}
Human::Human(const std::string& race, const std::string& gender) : _race(race), _gender(gender){}

const std::string& Human::getRace() const
{
	return _race;
}

void Human::setRace(const std::string& race)
{
	_race = race;
}

const std::string& Human::getGender() const
{
	return _gender;
}

void Human::setGender(const std::string& gender)
{
	_gender = gender;
}


People::People() {}
People::People(const std::string& country, const std::string& education) : _country(country), _education(education){}

const std::string& People::getCountry() const {
	return _country;
}

void People::setCountry(const std::string& country) {
	_country = country;
}

const std::string& People::getEducation() const {
	return _education;
}

void People::setEducation(const std::string& education) {
	_education = education;
}

Person::Person() {}
Person::Person(const std::string& name, int age) : _name(name), _age(age) {}

const std::string& Person::getName() const {
	return _name;
}

void Person::setName(const std::string& name) {
	_name = name;
}

int Person::getAge() const {
	return _age;
}


void Person::setAge(int age) {
	_age = age;
}