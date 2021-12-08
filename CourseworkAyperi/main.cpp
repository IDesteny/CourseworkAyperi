#include <windows.h>
#include "Stack.hpp"
#include "Circle.hpp"
#include "Rect.hpp"

int main()
{
	system("color F0");

	Stack<2, Figure*> st;

	Circle cl(100, 100, 200, 200);
	Rect rt(100, 100, 200, 200);

	st.Add(&cl);
	st.Add(&rt);

	st.Get()->Show();
	st.Get()->Show();
}