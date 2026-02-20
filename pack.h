#include "items.h"


using namespace std;

#pragma once


class pack
{
public:
    int pack_level;
    item pockets[16];

    pack();
    void open_pack();
    void open_pack(pack lootable);
    void move_item(int to, int from, pack from_pack);
    void move_item(int to, int from);
    void loot(pack lootable);
    int free_space();
    void drop_an_item(int pocket);
    
};

pack::pack()
{
    pack_level = 1;

    for (int i = 0; i < 16; i++)
    {
        pockets[i].number = 0;
    }
}

void pack::open_pack()
{
    for (int i = 0; i < 16; i++)
    {
        cout << "Pocket " << i + 1 << ": " << pockets[i].name << endl;
    }
}

void pack::open_pack(pack lootable)
{
    for (int i = 0; i < 16; i++)
    {
        cout << "Pocket " << i + 17 << ": " << lootable.pockets[i].name << endl;
    }
}

// other entity pack to player
void pack::move_item(int to, int from, pack from_pack)
{
    pockets[to] = from_pack.pockets[from];
    
    cout << pockets[to].name << " looted." << endl;
}

// player to player
void pack::move_item(int to, int from)
{
    pockets[to] = pockets[from];
    
    cout << pockets[to].name << " moved." << endl;
}


void pack::loot(pack lootable)
{
    int choice;
    int other_choice;
    bool done = false;
    
    cout << "The thing you're searching has this in it: " << endl;
        
    lootable.open_pack();
    
    cout << "Is there anything you'd like to drop from your pack?" << endl << "(0 when done)" << endl;
    
    open_pack();
    
    while (done == false)
    {
        cout << "Drop the item in which pocket: ";
        cin >> choice;
        
        if (choice >= 1 && choice <=16)
        {
            drop_an_item(16);
        }
        else
        {
            done = true;
        }
    }
    
    cout << "Your pack now looks like this: " << endl;
    
    open_pack();
    
    cout << endl << "What do you want to loot from this:" << endl;
    
    lootable.open_pack();
    
    while (done == false)
    {
        cout << "Loot the item in which pocket: ";
        cin >> choice;
        cout << endl << "Which pocket do you want to put it in: ";
        cin >> other_choice;
        
        if (choice >= 1 && choice <=16)
        {
            move_item(other_choice, choice, lootable);
        }
        else
        {
            done = true;
        }
    }
    
}

int pack::free_space()
{
    int free_spaces = 0;
    
    for (int i = 0; i < 16; i++)
    {
        if (pockets[i].number == 0)
        {
            free_spaces++;
        }
    }
    
    return free_spaces;
}

void pack::drop_an_item(int pocket)
{
    pockets[pocket].empty();
}
