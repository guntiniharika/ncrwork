#include<stdio.h>
#include<windows.h>
int main()
{
	LPWSTR *argv;
	int argc, i;
	argv = CommandLineToArgvW(GetCommandLineW(), &argc);
	if (argv == NULL)
	{
		printf("no command line arguments\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
			printf("%d:%S\n", i, argv[i]);
	}
	system("pause");
	return 0;
}
