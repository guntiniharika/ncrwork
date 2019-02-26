#include<iostream>
using namespace std;
class employee
{
	char *name;
	int empno;
	float salary;
public:
	employee()
	{

	}
	friend istream & operator >> (istream &in, employee &c);
	friend ostream & operator <<(ostream &in, employee &c);
};
istream &operator >> (istream &in, employee &c)
{
	cin >> c.name >> c.empno >>c.salary;
	return  cin;
}
ostream  &operator <<(ostream &in, employee &c)
{
	cout << c.name << c.empno << c.salary<<endl;
}
int main()
{
	employee e[5];
	for ( int i = 0; i <= 5; i++)
	{
		cin >> e[i];
	}
for (int i = 0; i <= 5; i++)
{
	cout << e[i];
}
system("pause");
return 0;
}
