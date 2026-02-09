//
// Created by Anh Huynh on 3.2.2026.
//

#include "class_Spy.h"

#include <iostream>

Spy::Spy(const std::string &name, const std::string &alias, const int resistance) : Person(name)
{
	this -> alias = alias;
	this -> resistance = resistance;
}

void Spy::set_identity(const std::string &spy_alias)
{
	this -> alias = spy_alias;
}

void Spy::identity() const
{
	if (resistance > 0)
	{
		std::cout << "My name is: " << alias << std::endl;
	}
	else
	{
		Person::identity();
		std::cout << "My alias is: " << alias <<std::endl;
	}
}

void Spy::interrogate()
{
	--resistance;
}

