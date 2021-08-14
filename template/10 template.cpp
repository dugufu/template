// #include <iostream>
// #include <string>
// using namespace std;
// 
// template<typename T>
// class father 
// {
// public:
// 
// 	T t1;
// };
// //template class inheritance father class with template must be define a data type
// template<typename T1, typename T2>
// class Son :public father<T2>
// {
// public:
// 	Son() 
// 	{
// 		cout << "Constructor called. Type id (T1):"<< typeid(T1).name() << endl;
// 		cout << "Constructor called. Type id (T2):"<< typeid(T2).name() << endl;
// 	}
// 	T1 t1;
// };
// 
// void test01() {
// 	Son<char, char>s1;
// 
// }
// int main() {
// 	test01();
// }