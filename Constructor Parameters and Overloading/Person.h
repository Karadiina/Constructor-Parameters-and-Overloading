#pragma once
#include <iostream>
#include <sstream>

class Person
{
private:
	std::string name;
	int age;
public:
	Person();
	Person(std::string newName) { name = newName; age = 0; };
	Person(std::string newName, int newAge);
	std::string toString();
};

