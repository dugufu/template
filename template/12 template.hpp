#pragma once
#include <iostream>
#include <string>

using namespace std;
template<typename Nametype, typename Agetype>
class Person {
public:

	Person(Nametype name, Agetype age);

	void showPerson();

	string m_name;
	int m_age;

};

template<typename Nametype, typename Agetype>
Person<Nametype, Agetype>::Person(Nametype name, Agetype age)
{
	this->m_name = name;
	this->m_age = age;
}

template<typename Nametype, typename Agetype>
void Person<Nametype, Agetype>::showPerson()
{
	cout << "Name : " << this->m_name << endl;
	cout << "Age : " << this->m_age << endl;
}
