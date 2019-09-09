#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define Asteriks "*" 
#define nL "\n"

int main()
{
	int X, Y;

	do
	{
		system("cls");
		for (X = 0; X < 1; X++)
		{
			for (Y = 0; Y < 10; Y++)
			{
				printf("%s", Asteriks);
				Sleep(100);
			}
		}
	} while (Y == 10);

	_getch();
	return 0;
}