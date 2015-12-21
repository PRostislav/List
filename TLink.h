#pragma once

template <class T>
class TLink
{
public:
	T Value;
	TLink* pNext;
	TLink<T>(int _val=0) {
		Value = _val;
		pNext = NULL;
	}
};

