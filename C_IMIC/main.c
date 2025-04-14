#include <stdio.h>
#include <Windows.h>

HANDLE muxtex_lock;

void print_log(char* log)
{
	int log_len = strlen(log);
	for (int i = 0; i < log_len; i++)
	{
		printf("%c", log[i]);
		Sleep(50);
	}
}

DWORD WINAPI function_1(_In_ LPVOID lp)
{
	while (1)
	{
		WaitForSingleObject(muxtex_lock, INFINITE);
		print_log("function_1 is running...\n");
		ReleaseMutex(muxtex_lock);
		Sleep(100);
	}
}

void main()
{
	//Create a thread
	muxtex_lock = CreateMutex(NULL, 0, NULL);
	HANDLE thread_1 = CreateThread(NULL, 1024, function_1, NULL, 0, NULL);

	while (1)
	{
		WaitForSingleObject(muxtex_lock, INFINITE);
		print_log("main is running...\n");
		ReleaseMutex(muxtex_lock);
		Sleep(200);
	}
}