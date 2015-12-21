#pragma once
#include "TLink.h"
#include <stdio.h>
#include <iostream>
using namespace std;

template <class T>
class TList
{
	TLink<T> *pFirst;
public:
	TList<T>() {
		pFirst = NULL;
	}

	TList<T>(const TLink<T>& link) {
		pFirst->pNext = NULL;
		pFirst->Value = link.Value;
	}

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

	void ShowList() {
		TLink<T>* current = pFirst;
		while (current->pNext != NULL) {
			cout << current->Value << endl;
			current = current->pNext;
		}
		cout << "That's all";
	}

	bool IsEmpty() {
		return (pFirst == NULL);
	}
};

