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

void test01()
{
	MyArrayClass<int>int_1(5);
	MyArrayClass<int>int_2(int_1);
	MyArrayClass<int>int_3(100); 

	int_3 = int_1;
	
}

int main()
{
	test01();
}