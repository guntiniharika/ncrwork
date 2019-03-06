#include<stdio.h>
#include<windows.h>
#include<tchar.h>
#define BUFFSIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hfile;
	TCHAR buffer[BUFFSIZE];
	hfile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("file does not exist.error(%d)\n", GetLastError()));
		getchar();
		return FALSE;
	}
	else
	{
		_tprintf(_T("file(%s) opened successfully\n"), argv[1]);
	}
	DWORD  nbr;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = ReadFile(hfile, buffer, BUFFSIZE, &nbr, NULL);
	if (ret == 0)
	{
		_tprintf(_T("cannot read file.error(%d)\n", GetLastError()));
	
	getchar();
	return FALSE;

	}
_tprintf(_T("text from(%s)%S\n"), argv[1], buffer);

CloseHandle(hfile);
getchar();
return TRUE;
}


