// #include <iostream>
// #include <string>
// using namespace std;
// 
// template<typename Nametype, typename Agetype>
// class Person {
// 
// public:
// 
// 	Person(Nametype name, Agetype age) : m_name(name), m_age(age) {}
// 
// 	Nametype m_name;
// 	Agetype m_age;
// 
// 	void getInfo() 
// 	{
// 		cout << "Name : \t" << this->m_name << endl;
// 		cout << "Age : \t" << this->m_age << endl;
// 	}
// };
// 
// 
// //template references to use on function method ___ 1
// void printInfo(Person<string, int>&p1) { //mostly used
// 	p1.getInfo();
// }
// 
// //create another template to use function with a template parameter method ___ 2
// template<typename T1, typename T2>
// void printInfo1(Person<T1, T2>& p1) {
// 	cout << "Type id :" << typeid(T1).name() <<endl;
// 	cout << "Type id :" << typeid(T2).name() <<endl;
// 	p1.getInfo();
// }
// 
// template<typename T>
// void printInfo2(T & p1) {
// 	cout << "Type id :" << typeid(T).name() << endl;
// 	p1.getInfo();
// }
// 
// 
// 
// void test01() {
// 	//Person<string, int>p1("ccr", 12);
// //	printInfo(p1);
// 	Person<string, int>p2("ccn", 87); \
// 	printInfo2(p2);
// 
// }
// 
// int main() {
// 	test01();
// }