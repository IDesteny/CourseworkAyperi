#pragma once
#include <windows.h>

class Figure
{
protected:
	int x1;
	int y1;
	int x2;
	int y2;

	HDC hdc = GetDC(GetConsoleWindow());

public:
	Figure(int x1, int y1, int x2, int y2);

	virtual void Show() = 0;
	virtual void Hide() = 0;
	virtual void Move(int x, int y);
};