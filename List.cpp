// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"

int main()
{
	TLink<int> a;
	if (a.pNext == NULL)
		cout << "TRUE";
	TList<int> list;
	if (list.IsEmpty())
		cout << "EMPTY";
	list.ShowList();
	//list.PushFirst(4);
	//list.PushFirst(4);
	//list.PushFirst(4);
	//list.PushLast(5);
    return 0;
}

