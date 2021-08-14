#include <iostream>
#include <string>
using namespace std;

int func01(int a, int b)
{
	return a + b;
}

template<typename T, typename V>
int func02(T a, V b) {
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	long d = 12;
	cout << func01(a, d) << endl;
	cout << func02(a, c) << endl;

}



int main() {

	test01();
	return 0;
}