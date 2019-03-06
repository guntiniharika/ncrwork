#include<stdio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	HANDLE Event = CreateEvent(NULL, FALSE, FALSE, TEXT("gunti_event"));
	if (Event == NULL)
		printf("CreateEvent Failed");
	else
		printf("Event Created");
	//CloseHandle(Event);
	getchar();
	return 0;
}
