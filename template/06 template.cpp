// #include <iostream>
// #include <string>
// using namespace std;
// 
// template<typename Nametype, typename Agetype>
// class Person {
// public:
// 
// 	Person(Nametype name, Agetype age) :m_name(name), m_age(age) {};
// 	
// 	void printInfo() 
// 	{ 
// 		cout << "Name : \t" << this->m_name << endl;
// 		cout << "Age : \t" << this->m_age << endl;
// 	}
// 
// 	Nametype m_name;
// 	Agetype m_age;
// 
// };
// 
// void func() {
// 	Person<string, int> p1("ccr", 12); //class template always need to <> define data type
// 	p1.printInfo();
// }
// 
// int main() {
// 	func();
// }