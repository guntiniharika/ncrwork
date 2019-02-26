#include<iostream>
using namespace std;
class Copyfirst
{
	int x, y;
public:
	Copyfirst()
	{
		x = y = 0;
			}
	Copyfirst(int a,int b)
	{
		x = a;
		y = b;
	}
	Copyfirst(const Copyfirst &m)
	{
		x = m.x;
		y = m.y;
			}
		~Copyfirst()
	{
			}
		void display()
		{
			cout << "x=" << x << "y=" << y << endl;
		}
};
int main()
{ 
	Copyfirst x(3,4);
	Copyfirst y(x);
	Copyfirst z = x;
	x.display();
	y.display();
	z.display();
	system("pause");
	return 0;
}
