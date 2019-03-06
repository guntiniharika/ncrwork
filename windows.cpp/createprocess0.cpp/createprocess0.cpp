#include<stdio.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	HANDLE hProcess;
	HANDLE hThread;
	DWORD dwProcessId = 0;
	DWORD dwThreadId = 0;
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	BOOL x = CreateProcess(L"C:\\Program Files\\Windows Media Player\\wmplayer.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	if (x == NULL)
	{
		printf("Creating process failed. Error(%d)\n", GetLastError());
		return FALSE;
	}
	printf("Process created successfully\n");
	printf("Process ID = %d\n", pi.dwProcessId);
	printf("Thread ID = %d\n", pi.dwThreadId);

	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	getchar();
	return 0;
}

