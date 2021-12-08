#include "Rect.hpp"

Rect::Rect(int x1, int y1, int x2, int y2)
	: Figure(x1, y1, x2, y2)
{}

void Rect::Show()
{
	FrameRect(hdc, &rect, CreateSolidBrush(RGB(0, 0, 0)));
}

void Rect::Hide()
{
	FrameRect(hdc, &rect, CreateSolidBrush(RGB(242, 242, 242)));
}