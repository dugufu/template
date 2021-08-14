#include <iostream>
#include <string>
using namespace std;
//outside the class define a template class
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
	cout << "Name : "<< this->m_name << endl;
	cout << "Age : " << this->m_age << endl;
}

void test01() {
	Person<string, int>p1("ccr", 12);
	p1.showPerson();
}
int main(){
	test01();
}
