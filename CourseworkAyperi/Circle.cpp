#include "Circle.hpp"

Circle::Circle(int x1, int y1, int x2, int y2)
	: Figure(x1, y1, x2, y2)
{
	SelectObject(hdc, CreateSolidBrush(RGB(242, 242, 242)));
}

void Circle::Show()
{
	SelectObject(hdc, CreatePen(0, 1, RGB(0, 0, 0)));
	Ellipse(hdc, x1, y1, x2, y2);
}

void Circle::Hide()
{
	SelectObject(hdc, CreatePen(0, 1, RGB(242, 242, 242)));
	Ellipse(hdc, x1, y1, x2, y2);
}
