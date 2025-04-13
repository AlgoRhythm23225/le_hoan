#include <stdio.h>
#include <Windows.h>

HANDLE ReadPipe;
HANDLE WritePipe;

DWORD WINAPI function_1(_In_ LPVOID lp)
{
	int cnt = 0;
	while (1)
	{
		cnt++;
		WriteFile(WritePipe, &cnt, sizeof(cnt), NULL, NULL);
		printf("function_1 is running...\n");
		Sleep(100);
	}
}

void main()
{
	//Tao Thread
	HANDLE thread_1 = CreateThread(NULL, 1024, function_1, NULL, 0, NULL);
	
	//Tao Pipe
	CreatePipe(&ReadPipe, &WritePipe, NULL, 1024);
	int temp = 0;
	printf("Data:\n");
	int buffer[40];
	while (1)
	{
		int num_data_read = 0;
		int num_data_read_0 = 0;
		PeekNamedPipe(ReadPipe, buffer, sizeof(buffer), &num_data_read_0, &num_data_read, NULL);
		
		//data read available
		num_data_read /= 4;

		num_data_read_0 /= 4;
		for (int i = 0; i < num_data_read; i++)
		{
			ReadFile(ReadPipe, &temp, sizeof(temp), NULL, NULL);
			printf("%d ", temp);
		}
		printf("\n");

		//Data read
		printf("Num_data_read_0: %d",num_data_read_0);
		printf("\n");
		Sleep(4000);
	}
}