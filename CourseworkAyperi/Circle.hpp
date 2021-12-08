#pragma once
#include <windows.h>
#include "Figure.hpp"

class Circle : public Figure
{
public:
	Circle(int x1, int y1, int x2, int y2);

	void Show() override;
	void Hide() override;
};