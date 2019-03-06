#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
#define BUFFERSIZE 30
using namespace std;
DWORD WINAPI threadfun(PVOID lparam)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("i=(%d)\n", i);
		Sleep(1000);  
			}
	return 0;
}
int main()
{
	DWORD threadId;
	HANDLE hthread;
	hthread = CreateThread(NULL, 0, threadfun, NULL, 0, &threadId);
	if (hthread == NULL)
	{
		printf("Unable to create thread\n");
		getchar();
		return 1;
	}
	WaitForSingleObject(hthread, 5000);
	DWORD ExitCode = 1;
	GetExitCodeThread(hthread, &ExitCode);
		printf("Exit code of the thread is %d\n", ExitCode);
		BOOL b = TerminateThread(hthread, ExitCode);
		if (b == 0)
			printf("Failed to Terminate Thread\n");
		else
			printf("Thread Terminated successfully\n");
	CloseHandle(hthread);
	getchar();
	return 0;
}