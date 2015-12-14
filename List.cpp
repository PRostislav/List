// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"

int main()
{
	TList<int> list;
	list.PushFirst(4);
	list.PushLast(5);
    return 0;
}

