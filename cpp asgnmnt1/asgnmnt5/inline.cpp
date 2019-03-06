#include<stdio.h>
#include<iostream>
using namespace std;
inline int add(int a, int b)
{
	return (a + b);
}
inline int sub(int a, int b)
{
	return (a - b);
}
inline int mul(int a, int b)
{
	return (a*b);
}
inline float divi(float a, float b)
{
	return (a / b);
}
inline  int mod(int a, int b)
{
	return (a%b);  
}
int main()
{
	cout << add(3, 4) << "\n";
	cout << sub(7, 5) << "\n";
	cout << mul(2, 3) << "\n";
	cout << divi(15, 3) << "\n";
	cout << mod(16, 7) << "\n";
	system("pause");
	return 0;
}