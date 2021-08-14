// #include <iostream>
// #include <string>
// using namespace std;
// 
// class Person 
// {
// public:
// 	void showPerson() {
// 		cout << "showPerson func called" << endl;
// 	}
// protected:
// private:
// };
// 
// class Person1
// {
// public:
// 	void showPerson() {
// 		cout << "showPerson_1 func called" << endl;
// 	}
// protected:
// private:
// };
// 
// template<typename ClassType>
// class MyClass {
// public:
// 
// 	ClassType ct;
// 
// 	void PersonFunc() {
// 		ct.showPerson();
// 	}
// 
// };
// 
// void func() {
// 	MyClass<Person>p; //person func called
// 	MyClass<Person1>p1; //person_1 func called
// 	p.PersonFunc();
// 	p1.PersonFunc();
// }
// 
// int main() {
// 	func();
// }