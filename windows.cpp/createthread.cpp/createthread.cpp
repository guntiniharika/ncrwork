#include<stdio.h>
#include<windows.h>
#include<iostream>
using namespace std;
DWORD WINAPI threadfunction(LPVOID lpparam)
{
	cout<<"hey its the thread";
	return 0;
}
int main()
{
	DWORD threadID;
	HANDLE hthread = CreateThread(NULL, 0, threadfunction, 0, NULL, &threadID);
	if (hthread == NULL)
		cout << "create thread failed" << endl;
	else
		cout << "thread is created" << endl;
	system("pause");
	return 0;
}
			
	
		
		