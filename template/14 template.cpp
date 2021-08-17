// #pragma once
// #include <iostream>
// #include <string>
// 
// using namespace std;
// 
// class Person {
// 
// public:
// 	Person() {}
// 	Person(string name, int age) {
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 
// 	string m_name;
// 	int m_age;
// };
// 
// template<typename T>
// class Myclass {
// public:
// 	Myclass(int arrNum)
// 	{
// 		cout << "Myclass Constructor called" << endl;
// 		this->m_arrNum = arrNum;
// 		this->m_arrSize = 0;
// 		this->m_classArr = new T[this->m_arrNum];
// 	}
// 	 
// 	Myclass(const Myclass &arr)
// 	{
// 		cout << "Myclass Copy Constructor called" << endl;
// 		this->m_arrNum = arr.m_arrNum;
// 		this->m_arrSize = arr.m_arrSize;
// 		//this->m_classArr = arr.m_classArr; strand copy
// 		this->m_classArr = new T[arr.m_arrNum]; //deep copy
// 
// 		for (int i = 0; i < this->m_arrNum; i++)
// 		{
// 			this->m_classArr[i] = arr.m_classArr[i];
// 		}
// 	}
// 	//operator prevent strand copy
// 	Myclass& operator=(const Myclass& arr)
// 	{
// 		cout << "Myclass operator Constructor called" << endl;
// 		if (this->m_classArr != NULL)
// 		{
// 			delete[] this->m_classArr;
// 			this->m_classArr = NULL;
// 			this->m_arrNum = 0;
// 			this->m_arrSize = 0;
// 
// 			this->m_arrNum = arr.m_arrNum;
// 			this->m_arrSize = arr.m_arrSize;
// 			//this->m_classArr = arr.m_classArr; strand copy
// 			this->m_classArr = new T[arr.m_arrNum]; //deep copy
// 
// 			for (int i = 0; i < this->m_arrNum; i++)
// 			{
// 				this->m_classArr[i] = arr.m_classArr[i];
// 			}
// 
// 			return *this;
// 		} 
// 
// 	}
// 
// 	void ArrPush(const T& val)
// 	{
// 		if (this->m_arrNum == this->m_arrSize) //full le
// 		{
// 			return;
// 		}
// 
// 		this->m_classArr[this->m_arrSize] = val;
// 		this->m_arrSize++;
// 
// 	}
// 
// 	void ArrPop()
// 	{
// 		if (this->m_arrSize == 0)
// 		{
// 			return;
// 		}
// 
// 		this->m_arrSize--;
// 	}
// 
// 	T& operator[](int val)
// 	{
// 		return this->m_classArr[val];
// 	}
// 
// 	~Myclass() {
// 		cout << "Myclass DeConstructor called" << endl;
// 		if (this->m_classArr != NULL)
// 		{
// 			delete[] m_classArr;
// 			m_classArr = NULL;
// 		}
// 	}
// 	int getArrNum() 
// 	{
// 		return this->m_arrNum;
// 	}
// 	int getArrSize()
// 	{
// 		return this->m_arrSize;
// 	}
// 	void setArrSize(int num)
// 	{
// 		this->m_arrSize = num;
// 	}
// private:
// 	T * m_classArr;
// 	int m_arrSize;
// 	int m_arrNum;
// 
// };
// 
// 
// template<typename T>
// void printArrayInfo(T &arr) 
// {
// 	for (int i = 0 ;i < arr.getArrSize() ; i++)
// 	{
// 		cout << arr[i] << endl;
// 	}
// 		
// }
// 
// void printArrayInfo2(Myclass<string>& arr)
// {
// 	for (int i = 0; i <  3; i++)
// 	{
// 		cout << arr[i] << endl;
// 	}
// 
// }
// 
// void test01() {
// 	Myclass<int>p1(5);
// // 	for (int i = 0; i < 5; i++)
// // 	{
// // 		p1.ArrPush(i);
// // 	}
// // 	printArrayInfo(p1);
// 	Myclass<int>p2(p1);
// // 	p2.ArrPop();
// // 	p2.ArrPop();
// // 	Myclass<string>person1(3);
// // 	person1[0] = "ccr";
// // 	person1[1] = "ccr1";
// // 	person1[2] = "ccr2";
// // 	person1.setArrSize(3);
// // 	printArrayInfo(person1);
// // 	printArrayInfo(p2);
// 
// 
// 
// 	Myclass<int>p3(100);
// // 	p1[0] = 100;
// 	p3 = p1;
// 
// 	cout << "Get array number / Get array size 1" << endl;
// 	p1.getArrNum();
// 	p1.getArrSize();
// 
// 	cout << "Get array number / Get array size 2" << endl;
// 	p2.getArrNum();
// 	p2.getArrSize();
// }
// 
// void printArrayInfo_person(Myclass<Person>& arr)
// {
// 	for (int i = 0; i < arr.getArrSize(); i++)
// 	{
// 
// 		cout << i << ".";
// 		cout << arr[i].m_name << endl;
// 		cout << arr[i].m_age << endl;
// 	}
// 
// }
// 
// void test02() 
// {
// 	Myclass<Person> emp(5);
// 
// 	Person p1("ccr", 12);
// 	Person p2("ccr1", 12);
// 	Person p3("ccr2", 12);
// 	Person p4("ccr3", 12);
// 
// 	emp.ArrPush(p1);
// 	emp.ArrPush(p2);
// 	emp.ArrPush(p3);
// 	emp.ArrPush(p4);
// 	printArrayInfo_person(emp);
// }
// 
// 
// int main() {
// 	test01();
// 	//test02();
// }