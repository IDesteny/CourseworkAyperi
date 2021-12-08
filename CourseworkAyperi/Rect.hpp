#pragma once
#include <windows.h>
#include "Figure.hpp"

class Rect : public Figure
{
private:
	RECT rect = { x1, y1, x2, y2 };

public:
	Rect(int x1, int y1, int x2, int y2);

	void Show() override;

	void Hide() override;
};