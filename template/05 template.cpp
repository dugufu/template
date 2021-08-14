// #include <iostream>
// #include <string>
// using namespace std;
// 
// class Person {
// 
// public:
// 	Person(string name, int age) :m_name(name), m_age(age) {};
// 	int m_age;
// 	string m_name;
// };
// 
// 
// template<class T>
// void printInfo(T status)
// {
// 	if (status == true)
// 	{
// 		cout << "Object A is euqal to Object B" << endl;
// 	}
// 	else {
// 		cout << "Object A is not euqal to Object B" << endl;
// 	}
// }
// 
// template<typename T>
// bool CheckSameValue(T& a, T& b) //normal check
// {
// 	bool status = false;
// 	if (a == b)
// 	{
// 		status = true;
// 		printInfo(status);
// 		return true;
// 	} 
// 	else
// 	{
// 		printInfo(status);
// 		return false;
// 	}
// 	printInfo(status);
// }
// 
// template<> bool CheckSameValue(Person &a, Person &b) //Class Person check
// {
// 	bool status = false;
// 	if (a.m_name == b.m_name && a.m_age == b.m_age)
// 	{
// 		status = true;
// 		printInfo(status);
// 		return true;
// 	}
// 	else
// 	{
// 		printInfo(status);
// 		return false;
// 	}
// 	
// }
// 
// void func() {
// 	Person p1("ccr", 12);
// 	Person p2("ccr", 12);
// 
// 	CheckSameValue(p1, p2);
// }
// 
// int main() {
// 	func();
// }