#include<stdio.h>
#include<windows.h>
int main()
{
	char *s = "niharika";
	WCHAR *t = L"gunti";
	char *multibyte = NULL;
	WCHAR *widechar = NULL;
	int n = strlen(s);
	int m = wcslen(t);
	int b = IsTextUnicode(s, sizeof(char)*n, NULL);
	if (b == 1)
	{
		printf(" s is unicode\n");
	}
	else{
			printf("s is not unicode\n");
		}
	int b1 = IsTextUnicode(t, sizeof(WCHAR)*m, NULL);
	if (b1 == 1)
	{
		printf(" t is unicode\n");
	}
	else {
		printf("t is not unicode\n");
	}
	int x = MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, 0);
	widechar = new WCHAR[x]; 
	int x1= MultiByteToWideChar(CP_UTF8, 0, s, -1, widechar, x);
	
	if (x1 == 0)
	{
		printf("cannot be converted .error(%d)", GetLastError());
	}
	else
	{
		printf("can be converted is %S\n", widechar); 
	}
	int y= WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, 0,NULL,NULL);
	multibyte = new char[y]; 
	int y1 = WideCharToMultiByte(CP_UTF8, 0, t, -1, multibyte, y,NULL,NULL);
	
	if (y1 == 0)
	{
		printf("cannot be converted .error(%d)", GetLastError());
	}
	else
	{
		printf("can be converted is %s\n", multibyte); 
	}
	system("pause");
	return 0;
}