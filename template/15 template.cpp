 #include <iostream>
 #include <string>
using namespace std;

template<typename T>
class MyArrayClass {
public:
	MyArrayClass(int memory_size)
	{
		cout << "constructor called" << endl;
		this->m_array_capacity = memory_size;
		this->m_array_size = 0;
		this->m_array = new T[m_array_capacity];
	}

	MyArrayClass(const MyArrayClass &class_array)
	{
			cout << "Copy constructor called" <<endl;
			this->m_array_capacity = class_array.m_array_capacity;
			this->m_array_size = class_array.m_array_size;

			this->m_array = new T[class_array.m_array_capacity];
			for (int i = 0; i < class_array.m_array_size; i++)
			{
				this->m_array[i] = class_array.m_array[i];
			}
		

	}

	MyArrayClass& operator=(const MyArrayClass& class_array)
	{
		cout << "operator constructor called" <<endl;
		if (this->m_array != NULL)
		{
			delete[] this->m_array;
			this->m_array = NULL;
			this->m_array_capacity = 0;
			this->m_array_size = 0;

			this->m_array_capacity = class_array.m_array_capacity;
			this->m_array_size = class_array.m_array_size;
			this->m_array = new T[class_array.m_array_capacity];
			for (int i = 0; i < class_array.m_array_size; i++)
			{
				this->m_array[i] = class_array.m_array[i];
			}

			return *this;
		}
		
	}

	void ArrPush(const T &val)
	{
		if (this->m_array_capacity == this->m_array_size)
		{
			return;
		}

		this->m_array[this->m_array_size] = val;
		this->m_array_size++;
	}

	void ArrPop()
	{
		if (this->m_array_size == 0)
		{
			return;
		}

		this->m_array_size--;
	}

	int getArrayCapacity()
	{
		return this->m_array_capacity;
	}

	int getArraySize()
	{
		return this->m_array_size;
	}

	T& operator[](int val)
	{
		return this->m_array[val];
	}

	~MyArrayClass()
	{
		if (this->m_array != NULL)
		{
			cout << "De-constructor called" << endl;
			delete[] this->m_array;
			this->m_array = NULL;
		}
	}
private:

	T* m_array;
	int m_array_capacity;
	int m_array_size;

};

class Person 
{
public:
	Person() {}
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string get_name()
	{
		return this->m_name;
	}
	int get_age()
	{
		return this->m_age;
	}
private:
	string m_name;
	int m_age;
};

template<typename T>
void printArrayInfo(T& arr)
{
	for (int i = 0; i < arr.getArrayCapacity() - 1; i++) // -1 is to make sure it always -1 between capacity and size
	{
		cout << arr[i] << endl;
	}
}

void printArrayPerson(MyArrayClass<Person>& arr)
{
	for (int i = 0; i < arr.getArrayCapacity() - 1; i++) // -1 is to make sure it always -1 between capacity and size
	{
		cout << arr[i].get_name() << endl;
		cout << arr[i].get_age() << endl;

	}
}
void test01()
{
	MyArrayClass<int>int_1(5);
	
	for (int i =1; i < int_1.getArrayCapacity();i++)
	{
		int_1.ArrPush(i);
	}
	int_1.ArrPush(14);
	int_1.ArrPop();
	printArrayInfo(int_1);

	cout << "Capacity :" << int_1.getArrayCapacity() << endl;
	cout << "Size :" << int_1.getArraySize() << endl;

	
}

void test02()
{
	MyArrayClass<Person>person1(5);

	Person p1("ccr1", 2);
	Person p2("ccr2", 4);
	Person p3("ccr3", 6);
	Person p4("ccr4", 8);

	person1.ArrPush(p1);
	person1.ArrPush(p2);
	person1.ArrPush(p3);
	person1.ArrPush(p4);

	printArrayPerson(person1);
}

void test03()
{
	MyArrayClass<char>emp(5);
	char emp_arr[] = { "abcde" };
	for (int i = 0; i < emp.getArrayCapacity()-1 ; i++)
	{
		emp.ArrPush(emp_arr[i]);
	}

	printArrayInfo(emp);
}

int main()
{
	//test01();
	//test02();
	test03();
}