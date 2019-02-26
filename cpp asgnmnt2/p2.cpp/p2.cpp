#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int rollno;
	char name[20];
	int m[3];
	int res;
	char *grade;
	friend istream &operator >> (istream &cin, student &c);
	friend ostream &operator <<(ostream &cout,student &c);
	friend void generate_results(student *c);
};
istream &operator >> (istream &cin,  student &c)
{
	cin >> c.name >> c.rollno >>c.grade>> c.m[1] >> c.m[2] >> c.m[3];
	return cin;
}
ostream &operator <<(ostream &cout, student &c)
{
	cout << "name is" << c.name << endl;
	cout << "rollno is" << c.rollno << endl;
	cout << "marks are" << endl;
	for (int i = 0; i <= 3; i++)
	{
		cout << c.m[i];
	}
	cout << "result is" << c.res << endl;
	cout << "grade is" << c.grade << endl;
	return cout;
}
void generate_results(student *c)
{
	int i;
	for (i = 0; i <= 3; i++) {
		c[i].res = c[i].m[1] + c[i].m[2] + c[i].m[3];
		int avg = c[i].res / 3;

		if (avg >= 90)
		{
			c[i].grade =(char *) 'A';
		}
		else if (avg >= 80)
		{
			c[i].grade = (char *) 'B';
		}
		else if (avg >= 70)
		{
			c[i].grade = (char *)'C';
		}
		else if (avg >= 60)
		{
			c[i].grade = (char *) 'D';
		}
	}
}
int main()
{
	student c[3];
	cout << c[1] << c[2] << c[3];
	generate_results(c);
	cout << c[1]<<endl;
	cout << c[2]<<endl;
	cout << c[3]<<endl;
	system("pause");
	return 0;
}
