#include<iostream>
using namespace std;
class  Employee 
{
	int a, b;
public:
	Employee()//initializing default constructor
	{
		cout << "default constructor"<<endl;
		}
	Employee(int x, int y)//initializing  parameterized constructor
	{
		cout << "parameterized constructor"<<endl;
		a = x;
		b = y;
	}
	Employee(Employee &x1)//initializing copy constructor
	{
		a = x1.a;
		b = x1.b;
		cout << "copy constructor" << endl;
			}
	~Employee()//destructor
	{
		cout << "destructor"<<endl;
	}
};
void fun()
{
	Employee e1, e2(20, 10);
	cout << sizeof(e1) << " " << sizeof(e2)<<endl;
	Employee e3(e2);
	cout << sizeof(e3)<<endl;
}
int main()
{
	fun();
	system("pause");
	return 0;
}