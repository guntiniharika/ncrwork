#include<stdio.h>
#include<windows.h>
#include<tchar.h>
#define BUFFSIZE 100
int main()
{
	HANDLE hfile;
	char *buffer ="niharika";
	hfile = CreateFileA("sample.txt", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("file does not exist.error(%d)\n", GetLastError()));
		getchar();
		return FALSE;
	}
	else
	{
		_tprintf(_T("file created successfully\n"));
	}
	DWORD nbw=0;
	//ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = WriteFile(hfile, buffer, strlen(buffer), &nbw, NULL);
	if (ret ==0)
	{
		_tprintf(_T("cannot write file.error(%d)\n", GetLastError()));

		getchar();
		return FALSE;
			}
	_tprintf(_T("text written\n"));

	CloseHandle(hfile);
	getchar();
	return TRUE;
}


