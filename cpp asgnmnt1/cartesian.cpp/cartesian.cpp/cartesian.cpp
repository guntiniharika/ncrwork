#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int m, int n)
	{
		x = m;
		y = n;
	}
	friend double distance(const Point &a, const Point &b);
};
double distance(const Point &a, const Point &b)
{
	 double res = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
	return res;
}
int main()
{
	Point p1(2, 4), p2(3, 5);
	double res = distance(p1, p2);
	cout << res << endl;
	system("pause");
	return 0;
	}
