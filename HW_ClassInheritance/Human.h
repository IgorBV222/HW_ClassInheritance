#pragma once
#include <string>
#include <iostream>


class Human
{
public:
	Human();
	Human(const std::string& race, const std::string& gender);

	const std::string& getRace() const;
	void setRace(const std::string& race);

	const std::string& getGender() const;
	void setGender(const std::string& gender);

	size_t getSize(const std::string& other);

	
private:
	std::string _race;
	std::string _gender;

};

class People : public Human
{
public:
	People();
	People(const std::string& country, const std::string& education);
	const std::string& getCountry() const;
	void setCountry(const std::string& country);
	
	const std::string& getEducation() const;
	void setEducation(const std::string& education);

	size_t getSize(const std::string& other);

private:
	std::string _country;
	std::string _education;
};

class Person : public People
{
public:
	Person();
	Person(const std::string& name, int age);
	const std::string& getName() const;
	void setName(const std::string& name);

	int getAge() const;
	void setAge(int age);

	size_t getSize(const std::string& other);

private:
	std::string _name;
	int _age;
};





