//Башкан Кирилл Вадимович
#define _CRT_SECURE_NO_WARNINGS
#include <io.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <cmath>
using namespace std;
enum Colors { Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, SuperBlue, Pink, LightMagenta, SandYellow, White };
enum napravlenie { up = 72, Left = 75, Right = 77, down = 80, enter = 13, esc = 27, space = 32 };
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);



void setColor(Colors text, Colors background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void SetCursor(int x, int y)
{
	COORD myCoords = { x,y };
	SetConsoleCursorPosition(hStdOut, myCoords);
}

void botLogic(int field[], int difficulty, int& kol, bool& find, bool& findOp) // bot logig Логика бота 
{
	bool free = false;
	int move;

	if (difficulty == 1)
	{
		move = rand() % 9;
		while (free == false)
		{
			if (field[move] != 0 && field[move] != 1)
			{
				field[move] = 0;
				kol++;
				free = true;
			}
			else
			{
				move = rand() % 9;
			}
		}
	}

	if (difficulty == 2)
	{
		if (kol >= 2)
		{
			find = false;

			if (find != true && field[0] == 0 && field[1] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[2] == 0)
			{
				if (field[1] != 1)
				{
					field[1] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[3] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[4] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[6] == 0)
			{
				if (field[3] != 1)
				{
					field[3] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[8] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[2] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[4] == 0)
			{
				if (field[7] != 1)
				{
					field[7] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[7] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[4] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[5] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[6] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[8] == 0)
			{
				if (field[5] != 1)
				{
					field[5] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[4] == 0)
			{
				if (field[5] != 1)
				{
					field[5] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[5] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[6] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[5] == 0)
			{
				if (field[3] != 1)
				{
					field[3] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[6] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[7] == 0)
			{
				if (field[1] != 1)
				{
					field[1] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[8] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[5] == 0 && field[8] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[6] == 0 && field[7] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[6] == 0 && field[8] == 0)
			{
				if (field[7] != 1)
				{
					field[7] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[7] == 0 && field[8] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find == false)
			{
				move = rand() % 9;
				while (free == false)
				{
					if (field[move] != 0 && field[move] != 1)
					{
						field[move] = 0;
						free = true;
						kol++;
					}
					else
					{
						move = rand() % 9;
					}
				}
			}
		}
		else
		{
			move = rand() % 9;
			while (free == false)
			{
				if (field[move] != 0 && field[move] != 1)
				{
					field[move] = 0;
					free = true;
					kol++;
				}
				else
				{
					move = rand() % 9;
				}
			}
		}

	}

	if (difficulty == 3)
	{
		findOp = false;
		find = false;
		if (kol >= 1)
		{
			if (find != true && field[0] == 0 && field[1] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[2] == 0)
			{
				if (field[1] != 1)
				{
					field[1] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[3] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[4] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[6] == 0)
			{
				if (field[3] != 1)
				{
					field[3] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[0] == 0 && field[8] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[2] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[4] == 0)
			{
				if (field[7] != 1)
				{
					field[7] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[1] == 0 && field[7] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[4] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[5] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[6] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[2] == 0 && field[8] == 0)
			{
				if (field[5] != 1)
				{
					field[5] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[4] == 0)
			{
				if (field[5] != 1)
				{
					field[5] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[5] == 0)
			{
				if (field[4] != 1)
				{
					field[4] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[3] == 0 && field[6] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[5] == 0)
			{
				if (field[3] != 1)
				{
					field[3] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[6] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[7] == 0)
			{
				if (field[1] != 1)
				{
					field[1] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[4] == 0 && field[8] == 0)
			{
				if (field[0] != 1)
				{
					field[0] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[5] == 0 && field[8] == 0)
			{
				if (field[2] != 1)
				{
					field[2] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[6] == 0 && field[7] == 0)
			{
				if (field[8] != 1)
				{
					field[8] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[6] == 0 && field[8] == 0)
			{
				if (field[7] != 1)
				{
					field[7] = 0;
					find = true;
					kol++;
				}
			}

			if (find != true && field[7] == 0 && field[8] == 0)
			{
				if (field[6] != 1)
				{
					field[6] = 0;
					find = true;
					kol++;
				}
			}

			if (find == false)
			{
				if (findOp != true && field[0] == 1 && field[1] == 1 && field[2] != 1 && field[2] != 0)
				{
					field[2] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[0] == 1 && field[2] == 1 && field[1] != 1 && field[1] != 0)
				{
					field[1] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[0] == 1 && field[3] == 1 && field[6] != 1 && field[6] != 0)
				{
					field[6] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[0] == 1 && field[4] == 1 && field[8] != 1 && field[8] != 0)
				{
					field[8] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[0] == 1 && field[6] == 1 && field[3] != 1 && field[3] != 0)
				{
					field[3] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[0] == 1 && field[8] == 1 && field[4] != 1 && field[4] != 0)
				{
					field[4] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[1] == 1 && field[2] == 1 && field[0] != 1 && field[0] != 0)
				{
					field[0] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[1] == 1 && field[4] == 1 && field[7] != 1 && field[7] != 0)
				{
					field[7] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[1] == 1 && field[7] == 1 && field[4] != 1 && field[4] != 0)
				{
					field[4] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[2] == 1 && field[4] == 1 && field[6] != 1 && field[6] != 0)
				{
					field[6] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[2] == 1 && field[5] == 1 && field[8] != 1 && field[8] != 0)
				{
					field[8] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[2] == 1 && field[6] == 1 && field[4] != 1 && field[4] != 0)
				{
					field[4] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[2] == 1 && field[8] == 1 && field[5] != 1 && field[5] != 0)
				{
					field[5] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[3] == 1 && field[4] == 1 && field[5] != 1 && field[5] != 0)
				{
					field[5] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[3] == 1 && field[5] == 1 && field[4] != 1 && field[4] != 0)
				{
					field[4] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[3] == 1 && field[6] == 1 && field[0] != 1 && field[0] != 0)
				{
					field[0] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[4] == 1 && field[5] == 1 && field[3] != 1 && field[3] != 0)
				{
					field[3] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[4] == 1 && field[6] == 1 && field[2] != 1 && field[2] != 0)
				{
					field[2] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[4] == 1 && field[7] == 1 && field[1] != 1 && field[1] != 0)
				{
					field[1] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[4] == 1 && field[8] == 1 && field[0] != 1 && field[0] != 0)
				{
					field[0] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[5] == 1 && field[8] == 1 && field[2] != 1 && field[2] != 0)
				{
					field[2] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[6] == 1 && field[7] == 1 && field[8] != 1 && field[8] != 0)
				{
					field[8] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[6] == 1 && field[8] == 1 && field[7] != 1 && field[7] != 0)
				{
					field[7] = 0;
					findOp = true;
					kol++;
				}

				if (findOp != true && field[7] == 1 && field[8] == 1 && field[6] != 1)
				{
					field[6] = 0;
					findOp = true;
					kol++;
				}

				if (findOp == false)
				{
					move = rand() % 9;
					while (free == false)
					{
						if (field[move] != 0 && field[move] != 1)
						{
							field[move] = 0;
							free = true;
							kol++;
						}
						else
						{
							move = rand() % 9;
						}
					}
				}
			}
		}
		else
		{
			move = rand() % 9;
			while (free == false)
			{
				if (field[move] != 0 && field[move] != 1)
				{
					field[move] = 0;
					free = true;
					kol++;
				}
				else
				{
					move = rand() % 9;
				}
			}
		}
	}
}

void fieldDraw(int field[], int length, int curPos[], int& cur) //Draw battlefield Отрисовка поля
{
	for (size_t i = 0; i < length; i++)
	{
		if (field[i] == 0)
		{
			switch (i)
			{
			case 0:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 0);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 1);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 2);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(0, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 1:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 0);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 1);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 2);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(7, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 2:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 0);
				wprintf(L"  \x2593\x2593  ");
				SetCursor(14, 1);
				wprintf(L" \x2593  \x2593 ");
				SetCursor(14, 2);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				SetCursor(14, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 3:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 4);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 5);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 6);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(0, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 4:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 4);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 5);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 6);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(7, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 5:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 4);
				wprintf(L"  \x2593\x2593  ");
				SetCursor(14, 5);
				wprintf(L" \x2593  \x2593 ");
				SetCursor(14, 6);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				SetCursor(14, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 6:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 8);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 9);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 10);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				break;
			case 7:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 8);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 9);
				wprintf(L" \x2593  \x2593 ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 10);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				break;
			case 8:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 8);
				wprintf(L"  \x2593\x2593  ");
				SetCursor(14, 9);
				wprintf(L" \x2593  \x2593 ");
				SetCursor(14, 10);
				wprintf(L"  \x2593\x2593  ");
				setColor(LightGray, Black);
				break;
			}
		}

		if (field[i] == 1)
		{
			switch (i)
			{
			case 0:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 0);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 1);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 2);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(0, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 1:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 0);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 1);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 2);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(7, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 2:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 0);
				wprintf(L" \x2593 \x2593   ");
				SetCursor(14, 1);
				wprintf(L"  \x2593    ");
				SetCursor(14, 2);
				wprintf(L" \x2593 \x2593   ");
				setColor(LightGray, Black);
				SetCursor(14, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 3:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 4);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 5);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 6);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(0, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 4:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 4);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 5);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 6);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"\x2551");
				SetCursor(7, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 5:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 4);
				wprintf(L" \x2593 \x2593   ");
				SetCursor(14, 5);
				wprintf(L"  \x2593    ");
				SetCursor(14, 6);
				wprintf(L" \x2593 \x2593   ");
				setColor(LightGray, Black);
				SetCursor(14, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 6:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 8);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 9);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(0, 10);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				break;
			case 7:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 8);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 9);
				wprintf(L"  \x2593   ");
				setColor(LightGray, Black);
				wprintf(L"║");
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(7, 10);
				wprintf(L" \x2593 \x2593  ");
				setColor(LightGray, Black);
				wprintf(L"║");
				break;
			case 8:
				if (curPos[i] == 1)
					setColor(Red, Black);
				SetCursor(14, 8);
				wprintf(L" \x2593 \x2593   ");
				SetCursor(14, 9);
				wprintf(L"  \x2593    ");
				SetCursor(14, 10);
				wprintf(L" \x2593 \x2593   ");
				setColor(LightGray, Black);
				break;
			}
		}

		if (field[i] == 2)
		{
			switch (i)
			{
			case 0:
				for (size_t j = 0; j < 3; j++)
				{
					SetCursor(0, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"\x2551");
				}
				SetCursor(0, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 1:
				for (size_t j = 0; j < 3; j++)
				{
					SetCursor(7, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"\x2551");
				}
				SetCursor(7, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 2:
				for (size_t j = 0; j < 3; j++)
				{
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					SetCursor(14, j);
					wprintf(L"      ");
				}
				setColor(LightGray, Black);
				SetCursor(14, 3);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 3:
				for (size_t j = 4; j < 7; j++)
				{
					SetCursor(0, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"\x2551");
				}
				SetCursor(0, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 4:
				for (size_t j = 4; j < 7; j++)
				{
					SetCursor(7, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"\x2551");
				}
				SetCursor(7, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550\x256c");
				break;
			case 5:
				for (size_t j = 4; j < 7; j++)
				{
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					SetCursor(14, j);
					wprintf(L"      ");
				}
				setColor(LightGray, Black);
				SetCursor(14, 7);
				wprintf(L"\x2550\x2550\x2550\x2550\x2550\x2550");
				break;
			case 6:
				for (size_t j = 8; j < 11; j++)
				{
					SetCursor(0, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"║");
				}
				break;
			case 7:
				for (size_t j = 8; j < 11; j++)
				{
					SetCursor(7, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
					setColor(LightGray, Black);
					wprintf(L"║");
				}
				break;
			case 8:
				for (size_t j = 8; j < 11; j++)
				{
					SetCursor(14, j);
					if (curPos[i] == 1)
						setColor(LightGray, Red);
					wprintf(L"      ");
				}
				setColor(LightGray, Black);
				break;
			}
		}

		SetCursor(0, 12);
	}
}

void input(int& cur, int curPos[], int field[], bool& loop,int& kol, bool& coop) //in game input Управление в игре. 
{
	int key;
	key = _getch();

	system("cls");

	switch (key)
	{
	case up:
		if (curPos[0] != 1 && curPos[1] != 1 && curPos[2] != 1)
		{
			curPos[cur] = 0;
			cur -= 3;
			curPos[cur] = 1;

		}
		break;
	case down:
		if (curPos[6] != 1 && curPos[7] != 1 && curPos[8] != 1)
		{
			curPos[cur] = 0;
			cur += 3;
			curPos[cur] = 1;

		}
		break;
	case Left:
		if (curPos[0] != 1)
		{
			curPos[cur] = 0;
			cur--;
			curPos[cur] = 1;
		}
		break;
	case Right:
		if (curPos[8] != 1)
		{
			curPos[cur] = 0;
			cur++;
			curPos[cur] = 1;
		}
		break;
	case enter:
		if ( kol%2!=0 && field[cur] != 1 && field[cur] != 0)
		{
			field[cur] = 1;
			loop = false;
			kol++;
		}

		if (coop == true && kol % 2 == 0 && field[cur] != 1 && field[cur] != 0)
		{
			field[cur] = 0;
			loop = false;
			kol++;
		}
		break;
	}
}

void input(int& curMenu, int posMenu[], int& difficulty, bool& started, bool& exit, bool& coop) //menu input Управление в главном меню 
{
	int key;
	key = _getch();

	system("cls");

	switch (key)
	{
	case up:if (curMenu != 0)
	{
		posMenu[curMenu] = 0;
		curMenu--;
		posMenu[curMenu] = 1;
	}
		   break;
	case down:
		if (curMenu != 3)
		{
			posMenu[curMenu] = 0;
			curMenu++;
			posMenu[curMenu] = 1;
		}
		break;
	case Left:
		if (curMenu == 2 && difficulty != 1)
		{
			difficulty--;
		}
		break;
	case Right:
		if (curMenu == 2 && difficulty != 3)
		{
			difficulty++;
		}
		break;
	case enter:
		if (curMenu==0)
		{
			started = true;
			coop = false;
		}

		if (curMenu == 1)
		{
			coop = true;
			started = true;
		}

		if (curMenu==3)
		{
			exit = true;
		}
		break;
	}
}

int mainMenu(int posMenu[],int& curMenu, int & difficulty, bool& coop) //build and draw main menu Построение и отрисовка главного меню. 
{
	bool exit = false;
	bool started = false;

	if (started)
	{
		return 1;
	}

	while (started==false)
	{
		if (exit)
		{
			return 0;
		}

		if (posMenu[0] == 1)
			setColor(LightGray, Red);
		SetCursor(40, 0);
		wprintf(L"Start\n");
		setColor(LightGray, Black);

		if (posMenu[1] == 1)
			setColor(LightGray, Red);
		SetCursor(40, 1);
		wprintf(L"COOP (new!) \n");
		setColor(LightGray, Black);

		if (posMenu[2] == 1)
			setColor(LightGray, Red);
		SetCursor(40, 2);
		wprintf(L"Difficulty: %d", difficulty);
		wprintf(L"\n");
		setColor(LightGray, Black);
		if (posMenu[3] == 1)
			setColor(LightGray, Red);
		SetCursor(40, 3);
		wprintf(L"Exit\n");
		setColor(LightGray, Black);
		input(curMenu, posMenu, difficulty,started,exit,coop);
	}
}

void fieldBuild(int field[], int length)//build battlefield Отрисовывает поле крестиков и ноликов
{
	for (size_t i = 0; i < length; i++)
	{
		field[i] = 2;
	}
}

int winCheck(int field[])// check for win\k.o\draw Проверка на победу\поражение\ничью
{
	bool win = false;
	int point = 0;
	//type 1 for x
	for (size_t i = 0; i < 3; i++)
	{
		if (field[i]==1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}
	
	//type 1 for 0
	point = 0;

	for (size_t i = 0; i < 3; i++)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 2 for x

	for (size_t i = 3; i < 6; i++)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 2 for 0

	for (size_t i = 3; i < 6; i++)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 3 for x

	for (size_t i = 6; i < 9; i++)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 3 for 0

	for (size_t i = 6; i < 9; i++)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 4 for x

	for (size_t i = 0; i < 7; i+=3)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 4 for 0

	for (size_t i = 0; i < 7; i += 3)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 5 for x

	for (size_t i = 1; i < 8; i += 3)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 5 for 0

	for (size_t i = 1; i < 8; i += 3)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 6 for 1

	for (size_t i = 2; i < 9; i += 3)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 6 for 0

	for (size_t i = 2; i < 9; i += 3)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 7 for x

	for (size_t i = 0; i < 9; i += 4)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 7 for 0

	for (size_t i = 0; i < 9; i += 4)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;
	//type 8 for x

	for (size_t i = 2; i < 7; i += 2)
	{
		if (field[i] == 1)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 1;
	}

	point = 0;
	//type 8 for 0

	for (size_t i = 2; i < 7; i += 2)
	{
		if (field[i] == 0)
		{
			point++;
		}
	}
	if (point == 3)
	{
		win == true;
		return 0;
	}

	point = 0;

	for (size_t i = 0; i < 9; i++)
	{
		if (field[i]==2)
		{
			point++;
		}
	}

	if (point == 0)
	{
		return 3;
	}

	if (win == false)
	{
		return 2;
	}
}

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int length = 9;
	int difficulty = 1;
	int kol = 0;
	int  cur = 0;
	int curMenu = 0;
	int field[length];
	int	curPos[length] = { 1 };
	int posMenu[3] = { 1 };	
	bool loop = true, find = false, findOp = false;
	bool gameLoop = true;
	bool winStatus = true;
	bool coop;

	if (mainMenu(posMenu, curMenu, difficulty,coop) == 1)
	{
		gameLoop = true;
	}
	else
	{
		gameLoop = false;
	}

	while (gameLoop)
	{
		if(winStatus)
		{
			fieldBuild(field, length);
			curPos[cur] = 0;
			cur = 0;
			curPos[cur] = 1;
			kol = 1;
			loop = true;
			find = false;
			findOp = false;
		}
			
		winStatus = false;
		while (loop)
		{
			fieldDraw(field, length, curPos, cur);
			input(cur, curPos, field, loop, kol, coop);
		}
		
		if (winCheck(field) == 1)
		{
			setColor(Green, Black);
			SetCursor(0, 14);
			wprintf(L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 15);
			wprintf(L"░░▄█████▄░▄███████▄░▄███████▄░██████▄░░");
			SetCursor(0, 16);
			wprintf(L"░░██▒▒▒▒█░███▒▒▒███░███▒▒▒███░██▒▒▒██░░");
			SetCursor(0, 17);
			wprintf(L"░░██▒▒▒▒▒░██▒▒▒▒▒██░██▒▒▒▒▒██░██▒▒▒██░░");
			SetCursor(0, 18);
			wprintf(L"░░██▒▒▒▀█░███▒▒▒███░███▒▒▒███░██▒▒▒██░░");
			SetCursor(0, 19);
			wprintf(L"░░▀█████▀░▀███████▀░▀███████▀░██████▀░░");
			SetCursor(0, 20);
			wprintf(L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 21);
			wprintf(L"░░░░██▒▒▒▒░██▒▒▒██░▄█████░██▒▒▒▒██▀░░░░");
			SetCursor(0, 22);
			wprintf(L"░░░░██▒▒▒▒░██▒▒▒██░██▀▒▒▒░██▒▒▒██░░░░░░");
			SetCursor(0, 23);
			wprintf(L"░░░░██▒▒▒▒░██▒▒▒██░██▒▒▒▒░█████▀░░░░░░░");
			SetCursor(0, 24);
			wprintf(L"░░░░██▒▒▒▒░██▄▒▄██░██▄▒▒▒░██▒▒▒██░░░░░░");
			SetCursor(0, 25);
			wprintf(L"░░░░▀█████░▀█████▀░▀█████░██▒▒▒▒██▄░░░░");
			SetCursor(0, 26);
			wprintf(L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
			setColor(LightGray, Black);

			winStatus = true;
			fieldDraw(field, length, curPos, cur);
			if (mainMenu(posMenu, curMenu, difficulty,coop) == 1)
			{
				gameLoop = true;
			}
			else
			{
				gameLoop = false;
			}
		}

		if (winCheck(field) == 2)
		{
			loop = true;
		}

		if (winCheck(field) == 3 && winStatus == false)
		{
			SetCursor(0, 14);
			wprintf(L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 15);
			wprintf(L"░░░▄░░░░░░░░█░░███░░▄▄▄▄▄░█░░█░████░███░░");
			SetCursor(0, 16);
			wprintf(L"░░█ █░░░██░░█░█░░░█░░░█░░░█▄▄█░█▄▄▄░█▄▄█░");
			SetCursor(0, 17);
			wprintf(L"░█▄▄▄█░░█░█░█░█░░░█░░░█░░░█░░█░█░░░░█░█░░");
			SetCursor(0, 18);
			wprintf(L"█░░░░░█░█░░██░░███░░░░█░░░█░░█░████░█░░█░");
			SetCursor(0, 19);
			wprintf(L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 20);
			wprintf(L"▄▄▄▄▄░▄░░░▄░░░░▄░░░▄▄▄░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 21);
			wprintf(L"░░█░░░█░░█░█░░█░█░░█▄▄░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 22);
			wprintf(L"░░█░░░█░░█░█░█░░█░░█░░░░░░░░░░░░░░░░░░░░░");
			SetCursor(0, 23);
			wprintf(L"░░█░░░█░█░░░█░░░░█░███░░░█░█░█░░░░░░░░░░░");
			fieldDraw(field, length, curPos, cur);
			setColor(LightGray, Black);

			winStatus = true;
			if (mainMenu(posMenu, curMenu, difficulty,coop) == 1)
			{
				gameLoop = true;
			}
			else
			{
				break;
			}
		}

		if (winStatus == false && coop == false)
			botLogic(field, difficulty, kol, find, findOp);

		if (winCheck(field) == 0 && winStatus == false)
		{
			setColor(Red, Black);
			SetCursor(0, 14);
			wprintf(L"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼");
			SetCursor(0, 15);
			wprintf(L"███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀");
			SetCursor(0, 16);
			wprintf(L"██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼");
			SetCursor(0, 17);
			wprintf(L"██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀");
			SetCursor(0, 18);
			wprintf(L"██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼");
			SetCursor(0, 19);
			wprintf(L"███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄");
			SetCursor(0, 20);
			wprintf(L"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼");
			SetCursor(0, 21);
			wprintf(L"███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼");
			SetCursor(0, 22);
			wprintf(L"██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼");
			SetCursor(0, 23);
			wprintf(L"██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼");
			SetCursor(0, 24);
			wprintf(L"██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼");
			SetCursor(0, 25);
			wprintf(L"███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄");
			SetCursor(0, 26);
			wprintf(L"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼");
			setColor(LightGray, Black);
			fieldDraw(field, length, curPos, cur);
			

			winStatus = true;
			if (mainMenu(posMenu, curMenu, difficulty,coop) == 1)
			{
				gameLoop = true;
			}
			else
			{
				break;
			}
		}

		if (winCheck(field) == 2)
		{
			loop = true;
		}

	}
}