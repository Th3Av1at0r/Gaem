#include "items.h"


using namespace std;

#pragma once


class pack
{
public:
	int pack_level;
	item pockets[16];

	pack();
};

pack::pack()
{
	pack_level = 1;

	for (int i = 0; i < 8; i++)
	{
		pockets[i].number = 0;
	}

	for (int i = 8; i < 16; i++)
	{
		// lv 2 will unlock the second 8 slots
		pockets[i].number = 999;
	}
}