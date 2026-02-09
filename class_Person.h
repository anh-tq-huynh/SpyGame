//
// Created by Anh Huynh on 3.2.2026.
//

#ifndef LAB3_CLASS_PERSON_H
#define LAB3_CLASS_PERSON_H
#include <string>


class Person
{
	public:
		Person (const std::string &name = "nobody");
		virtual ~Person() = default;
		virtual void identity() const;
		virtual void interrogate();
	private:
		std::string name;
};


#endif //LAB3_CLASS_PERSON_H