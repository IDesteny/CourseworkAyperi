#pragma once
#include <stdexcept>

template <int U, class T>
class Stack
{
private:
	T arr[U] {};
	int pos {};

public:
	void Add(T obj);
	T Get();
	void Remove();
	bool IsEmpty();
	bool IsFull();
};

template <int U, class T>
void Stack<U, T>::Add(T obj)
{
	if (pos >= U)
		throw std::out_of_range(nullptr);

	arr[pos++] = obj;
}

template <int U, class T>
T Stack<U, T>::Get()
{
	if (!pos)
		throw std::out_of_range(nullptr);

	T tmp = arr[--pos];
	arr[pos] = T();

	return tmp;
}

template <int U, class T>
void Stack<U, T>::Remove()
{
	for (int i = 0; i < pos; ++i)
		arr[i] = T();
}

template <int U, class T>
bool Stack<U, T>::IsEmpty()
{
	return !pos;
}

template <int U, class T>
bool Stack<U, T>::IsFull()
{
	return pos == U;
}