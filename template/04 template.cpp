// #include <iostream>
// #include <string>
// using namespace std; 
// 
// void myprint(int a, int b) // if only sheng ming so it cant find the statement its want
// {
// 	cout << "normal function called" << endl;
// }
// 
// template<typename T>
// void myprint(T a,T b) {
// 	cout << "template function called" << endl;
// }
// 
// 
// template<typename T>
// void myprint(T a, T b, T c) { //function overload
// 	cout << "3para template function called" << endl;
// }
// 
// 
// void test01() {
// 	int a = 10;
// 	int b = 20;
// 
// // 	myprint(a, b); // a and b is int type, so take void my print(int a, int b)
// // 	myprint<>(a, b); // a and b is int type,but with this symbol <> a blank template change make it as a template void myprint(T a,T b)
// // 	myprint<>(a, b, 100);// template can be overloaded
// 
// 	char c1 = 'a';
// 	char c2 = 'b';
// 	myprint(c1, c2); //template function called.Due to c1 and c2 are char types so machine dont do invisble change for it so this directly use template 
// }
// 
// 
// 
// 
// int main() {
// 	test01();
// }