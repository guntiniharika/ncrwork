#include<iostream>
using namespace std;
class polar
{
	float angle, radius;
public:
	static int count;
	polar()
	{ 
		count++;
		angle = radius = 0.0f;
	}
	polar(float a,float r)
	{
		count++;
		angle= a;
		radius = r;
			}
	~polar()
	{
		count--;
	}
			};
	int polar::count;
int main()
{
	polar a, b, c, d, e, f(3.4, 5.5), g(2.3, 6.7);
	cout << "no of active objects are";
		cout<<polar::count<<endl;
		system("pause");
	return 0;
}