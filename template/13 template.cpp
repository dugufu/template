// #pragma once
// #include <iostream>
// #include <string>
// 
// using namespace std;
// 
// template<typename T1, typename T2> // Pre-define class
// class Person;
// 
// template<typename T1, typename T2>
// void showPersonDetails2(Person<T1, T2> p) // Pre-define function
// {
// 	cout << "outsdie class implement" << endl;
// }
// 
// 
// template<typename T1,typename T2>
// class Person 
// {
// 	 friend void showPersonDetails(Person<T1, T2> p)
// 	{
// 		cout << "Name : " << p.m_name << endl;
// 		cout << "Age : " << p.m_age << endl;
// 	}
// 
// 	 friend void showPersonDetails2<>(Person<T1, T2> p); //global implement //define inside class and implement outsite
// public:
// 	Person(T1 name, T2 age): m_name(name),m_age(age) {}
// 
// 	T1 m_name;
// 	T2 m_age;
// 
// };
// 
// void test01() {
// 	Person<string, int>p1("Tom", 12);
// 	showPersonDetails(p1);
// }
// 
// 
// int main() {
// 	test01();
// }