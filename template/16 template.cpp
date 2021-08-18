#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printInfo(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int> num;
	num.push_back(10);
	num.push_back(20);
	num.push_back(30);
	num.push_back(40);

// 	vector<int>::iterator itBegin = num.begin();
// 	vector<int>::iterator itEnd = num.end();
// 
// 	while (itBegin != itEnd)
// 	{
// 		cout << *itBegin << endl;
// 		itBegin++; // move pointer forward
// 	}
// 	for (vector<int>::iterator it = num.begin();it != num.end();it++) //initial a number then compare to end number then ++ initialed number
// 	{
// 		cout << *it << endl;
// 	}
	for_each(num.begin(), num.end(), printInfo);
}

int main() 
{
	test01();
}