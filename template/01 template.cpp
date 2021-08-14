#include <iostream>
#include <string>
using namespace std;
// 
// template<typename T> // 8 bytes
// 
// void myswap(T& a, T& b)
// {
// 	T temp = a;
// 	a = b;
// 	b = temp;
// 
// 	cout << a << " " << b<<endl;
// }
// 
// template<class T>
// void func01() {
// 	cout << "call func()" << endl;
// }
// 
// void func02() {
// 	func01<int>(); //template
// }
// 
// void func03() {
// 	func02();
// }
// 
// 
// int main() {
// 	int a = 10;
// 	int b = 20;
// 
// 	double c = 10.2;
// 	double d = 20.2;
// 
// 	//auto assign template 
// 	myswap(a, b);
// 	//Manual assign template var
// 	myswap<double>(c, d);
// }