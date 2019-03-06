#include<stdio.h>
#include<iostream>
using namespace std;
class Time
{ 
	int hrs, mins, secs;
public:
	Time()
	{
		 hrs = 0;
		 mins = 0;
		 secs = 0;
	}
	Time( int  hr,int min,int sec)
	{
		hrs = hr, mins = min, secs = sec;
	}
	void display()
	{
		cout << hrs << ":" << mins << ":" << secs;
			}
	void add(Time t1, Time t2)
	{
		hrs = t1.hrs +t2.hrs;
		mins =t1.mins + t2.mins;
		secs = t1.secs +t2.secs;
			}
	};
int main()
{
	Time t1(4, 15, 46), t2(7, 19, 32), t3;
	t3.add(t1, t2);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
