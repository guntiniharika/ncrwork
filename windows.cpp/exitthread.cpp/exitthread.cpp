#include<Windows.h>
#include<stdio.h>
#include<strsafe.h>
#include<iostream>
#define BUFFERSIZE 30
using namespace std;
DWORD ExitCode = 1;
DWORD WINAPI threadfun(PVOID lparam)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("i=(%d)\n", i);
		Sleep(1000);
		if (i == 3)
			ExitThread(ExitCode);
	}
	return 0;
}
int main()
{
	DWORD threadId;
	HANDLE hthread;
	hthread= CreateThread(NULL, 0, threadfun, NULL, 0, &threadId);
	if (hthread == NULL)
	{
		printf("Unable to create thread\n");
		getchar();
		return 1;
	}
	BOOL b = GetExitCodeThread(hthread, &ExitCode);
	if (b == 0)
		printf("Failed to exited Thread\n");
	else
		printf("Thread exited successfully\n");
	printf("Exit code of the thread is %d\n", ExitCode);
	WaitForSingleObject(hthread, 5000);
	CloseHandle(hthread);
	getchar();
	return 0;
}
