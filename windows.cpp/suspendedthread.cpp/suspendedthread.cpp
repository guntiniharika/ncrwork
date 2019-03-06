#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<strsafe.h>
using namespace std;
DWORD WINAPI threadfun(LPVOID lparam)
{
	int i;
	for (i = 0; i < 1001; i++)
	{
		printf("i=(%d)\n",i);
		}
	return 0;
}
int main()
{
	DWORD threadID;
	HANDLE hthread = CreateThread(NULL, 0, threadfun, NULL, 0, &threadID);
	if (hthread == NULL)
	{
		cout << "thread creation failed";
		getchar();
		return 1;
	}
	else
	{
		Sleep(5000);
		ResumeThread(hthread);
	}
		WaitForSingleObject(hthread, 5000);
		CloseHandle(hthread);
			getchar();
	return 0;

}