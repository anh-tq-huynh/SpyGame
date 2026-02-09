//
// Created by Anh Huynh on 3.2.2026.
//

#ifndef LAB3_CLASS_SPY_H
#define LAB3_CLASS_SPY_H
#include "class_Person.h"


class Spy : public Person
{
	public:
		Spy(const std::string &name, const std::string &alias, int resistance);
		void set_identity(const std::string &spy_alias);
		void identity() const override;
		void interrogate() override;
	private:
		//std::string spy_name;
		std::string alias;
		int         resistance;
};


#endif //LAB3_CLASS_SPY_H