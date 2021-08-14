#include <iostream>
#include <string>
using namespace std;
// 
// //template is use for all variable
// //T must be consistence
// template<typename T>
// void swapMaxValue(T& a, T& b) {
// 	T temp = a;
// 	a = b;
// 	b = temp;
// }
// 
// template<typename T>
// void mySortArray(T arr[], int len) {
// 	for (int i = 0; i < len ; i++)
// 	{
// 		int max = i;
// 		for (int j = i+1;j< len;j++)
// 		{
// 			if (arr[max] < arr[j])
// 			{
// 				max = j; //update index
// 			}
// 		}
// 
// 		if (max != i)
// 		{
// 			swapMaxValue(arr[max], arr[i]);
// 		}
// 	}
// 
// }
// 
// template<typename T>
// void printInfo(T arr[],int len) {
// 	for (int i = 0;i< len ; i++)
// 	{
// 		cout << arr[i];
// 	}
// }
// 
// void test01() {
// 	char charArr[] = "fdebca"; //abcdef
// 	int numArr[] = { 4,5,6,7,1,2,3 };
// 	int num = sizeof(charArr) / sizeof(char);
// 	int num_1 = sizeof(numArr) / sizeof(int);
// 	mySortArray(charArr, num);
// 	printInfo(charArr, num);
// 
// 	mySortArray(numArr, num_1);
// 	printInfo(numArr, num_1);
// }
// 
// int main() {
// 	test01();
// }