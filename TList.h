#pragma once
#include "TLink.h"
#include <stdio.h>
using namespace std;

template <class T>
class TList
{
	TLink<T> *pFirst;
public:
	void PushFirst(T Element) {
		TLink<T>* tmp;
		tmp = new TLink<T>;
		tmp->Value = Element;
		tmp->pNext = pFirst;
		pFirst = tmp;
	}
	
	void PushLast(T Element) {
		TLink<T>* tmp = new TLink<T>;
		tmp->Value = Element;
		tmp->pNext = NULL;
		TLink<T>* current = pFirst;
		while (current->pNext != NULL)
			current = current->pNext;
		current->pNext = tmp;
	}
};

