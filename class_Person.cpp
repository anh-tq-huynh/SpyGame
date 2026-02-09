//
// Created by Anh Huynh on 3.2.2026.
//

#include "class_Person.h"

#include <iostream>

Person::Person(const std::string &name) : name(name)
{
}

void Person::identity() const
{
	std::cout << "My name is: "<< name<< std::endl;
}

void Person::interrogate()
{

}


