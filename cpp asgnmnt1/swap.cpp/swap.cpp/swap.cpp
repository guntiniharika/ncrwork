#include<stdio.h>
#include<iostream>
using namespace std;
void main()
{
	int x, y, n;
	void swap(int x, int y);
	void swap1(int *x, int *y);
	cout << "enter values";
	cin >> x;
	cin >> y;
	cout << "enter n=1 for call by value,n=2 for call by reference";
	cin >> n;
	switch(n);
	{
	case 1:
	    cout << "call by value";
		swap(x, y);
		cout << "x= " << x << "y= " << y;
		break;
	case 2:
		cout << "call by reference";
		swap1(&x, &y);
		cout << "x= " << x << "y= " << y;
		break;
	}
	getch();
}
	void swap(int x, int y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
		cout << "after swapping" << x << y;
			}
	void swap1(int *x, int *y)
	{
		int temp;
		temp = *x;
		*x = *y;
		*y = temp;
		cout << "after swapping" << *x << *y;
	}
