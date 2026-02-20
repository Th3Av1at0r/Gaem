using namespace std;

#pragma once

class item
{
public:
    int number;
    string name;
    // cost
    int value;
    // 1 = quest item, 2 = weapon, 3 = sellable
    int type;

    

    item();
    item(int i_num, string i_nam, int i_val, int i_type);
    void empty();

    bool operator==(item comparator);
    void operator=(item original);
    item make_1();
    item make_2();
    item make_3();
    item make_4();
    item make_5();
    item make_6();
    item make_7();
    item make_8();
    item make_9();
    item make_10();
    item make_11();
    item make_12();
    item make_13();
    item make_14();
    item make_15();
    item make_16();
    item make_17();
    item make_18();
    item make_19();
    item make_20();
    item make_21();
    item make_22();
    item make_23();
    item make_24();
    item make_999();

    item chose_make(int choice);
};


item::item()
{
    empty();
}

item::item(int i_num, string i_nam, int i_val, int i_type)
{
    number = i_num;
    name = i_nam;
    value = i_val;
    type = i_type;
}

void item::empty()
{
    number = 0;
    name = "item";
    value = 0;
    type = 0;
}

bool item::operator==(item comparator)
{
    if (number == comparator.number && name == comparator.name && value == comparator.value && type == comparator.type)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void item::operator=(item original)
{
    number = original.number;
    name = original.name;
    value = original.value;
    type = original.type;
}

/*
Type 1 Items: Weapons
Item     1: Small Sword
Item     2: Short Sword
Item     3: Long Sword
Item     4: Great Sword
Item     5: Short Bow
Item     6: Long Bow
Item     7: Composite Bow
Item     8: War Bow
Item     9: Arcane Focus
Item    10: Magic Wand
Item    11: Magic Rod
Item    12: Magic Staff

Type 2 Items: Items to Sell
Item    13: Kitonium Nugget
Item    14: Simple Jewlery
Item    15: Ceremonial Weapon
Item    16: Fine Clothes
Item    17: Pile of Jewels
Item    18: Crate of Spices

Type 3 Items: Usable Items
Item    19: Health Potion
Item    20: Mana Potion
Item    21: Sweet Roll
Item    22: Greater Health Potion
Item    23: Greater Mana Potion
Item    24: Giant Sweet Roll

Type 0 Items: Quest Items
Item   998:
Item   999:
*/
item item::make_1()
{
    item sword;

    sword.number = 1;
    sword.name = "Small Sword";
    sword.value = 40;
    sword.type = 1;

    return sword;
}

item item::make_2()
{
    item sword;

    sword.number = 2;
    sword.name = "Short Sword";
    sword.value = 70;
    sword.type = 1;

    return sword;
}

item item::make_3()
{
    item sword;

    sword.number = 3;
    sword.name = "Long Sword";
    sword.value = 140;
    sword.type = 1;

    return sword;
}

item item::make_4()
{
    item sword;

    sword.number = 4;
    sword.name = "Great Sword";
    sword.value = 200;
    sword.type = 1;

    return sword;
}

item item::make_5()
{
    item bow;

    bow.number = 5;
    bow.name = "Short Bow";
    bow.value = 40;
    bow.type = 1;

    return bow;
}

item item::make_6()
{
    item bow;

    bow.number = 6;
    bow.name = "Long Bow";
    bow.value = 70;
    bow.type = 1;

    return bow;
}

item item::make_7()
{
    item bow;

    bow.number = 7;
    bow.name = "Composite Bow";
    bow.value = 140;
    bow.type = 1;

    return bow;
}

item item::make_8()
{
    item bow;

    bow.number = 8;
    bow.name = "War Bow";
    bow.value = 200;
    bow.type = 1;

    return bow;
}

item item::make_9()
{
    item arcanum;

    arcanum.number = 9;
    arcanum.name = "Arcane Focus";
    arcanum.value = 40;
    arcanum.type = 1;

    return arcanum;
}

item item::make_10()
{
    item arcanum;

    arcanum.number = 10;
    arcanum.name = "Magic Wand";
    arcanum.value = 70;
    arcanum.type = 1;

    return arcanum;
}

item item::make_11()
{
    item arcanum;

    arcanum.number = 11;
    arcanum.name = "Magic Rod";
    arcanum.value = 140;
    arcanum.type = 1;

    return arcanum;
}

item item::make_12()
{
    item arcanum;

    arcanum.number = 12;
    arcanum.name = "Magic Staff";
    arcanum.value = 200;
    arcanum.type = 1;

    return arcanum;
}

/*
Type 2 Items: Items to Sell
Item    13: Kitonium Nugget
Item    14: Simple Jewlery
Item    15: Ceremonial Weapon
Item    16: Fine Clothes
Item    17: Pile of Jewels
Item    18: Crate of Spices
*/
item item::make_13()
{
    item treasure;

    treasure.number = 13;
    treasure.name = "Kitonium Nugget";
    treasure.value = 40;
    treasure.type = 2;

    return treasure;
}

item item::make_14()
{
    item treasure;

    treasure.number = 14;
    treasure.name = "Simple Jewlery";
    treasure.value = 40;
    treasure.type = 2;

    return treasure;
}

item item::make_15()
{
    item treasure;

    treasure.number = 15;
    treasure.name = "Ceremonial Weapon";
    treasure.value = 70;
    treasure.type = 2;

    return treasure;
}

item item::make_16()
{
    item treasure;

    treasure.number = 16;
    treasure.name = "Fine Clothes";
    treasure.value = 120;
    treasure.type = 2;

    return treasure;
}

item item::make_17()
{
    item treasure;

    treasure.number = 17;
    treasure.name = "Pile of Jewels";
    treasure.value = 140;
    treasure.type = 2;

    return treasure;
}

item item::make_18()
{
    item treasure;

    treasure.number = 18;
    treasure.name = "Crate of Spices";
    treasure.value = 180;
    treasure.type = 2;

    return treasure;
}

/*
Type 3 Items: Usable Items
Item    19: Health Potion
Item    20: Mana Potion
Item    21: Sweet Roll
Item    22: Greater Health Potion
Item    23: Greater Mana Potion
Item    24: Giant Sweet Roll
*/

item item::make_19()
{
    item treasure;

    treasure.number = 19;
    treasure.name = "Health Potion";
    treasure.value = 100;
    treasure.type = 3;

    return treasure;
}

item item::make_20()
{
    item treasure;

    treasure.number = 20;
    treasure.name = "Mana Potion";
    treasure.value = 100;
    treasure.type = 3;

    return treasure;
}

item item::make_21()
{
    item treasure;

    treasure.number = 21;
    treasure.name = "Sweet Roll";
    treasure.value = 100;
    treasure.type = 3;

    return treasure;
}

item item::make_22()
{
    item treasure;

    treasure.number = 22;
    treasure.name = "Greater Health Potion";
    treasure.value = 300;
    treasure.type = 3;

    return treasure;
}

item item::make_23()
{
    item treasure;

    treasure.number = 23;
    treasure.name = "Greater Mana Potion";
    treasure.value = 300;
    treasure.type = 3;

    return treasure;
}

item item::make_24()
{
    item treasure;

    treasure.number = 24;
    treasure.name = "Giant Sweet Roll";
    treasure.value = 300;
    treasure.type = 2;

    return treasure;
}

item item::make_999()
{
    item quest_item;

    quest_item.number = 999;
    quest_item.name = "CHAOS";
    quest_item.value = 999999;
    quest_item.type = 0;

    return quest_item;
}

item item::chose_make(int choice)
{
    switch (choice)
    {
    case 1:

        return make_1();

        break;

    case 2:

        return make_2();

        break;

    case 3:

        return make_3();

        break;

    case 4:

        return make_4();

        break;

    case 5:

        return make_5();

        break;

    case 6:

        return make_6();

        break;

    case 7:

        return make_7();

        break;

    case 8:

        return make_8();

        break;

    case 9:

        return make_9();

        break;

    case 10:

        return make_10();

        break;

    case 11:

        return make_11();

        break;

    case 12:

        return make_12();

        break;

    case 13:

        return make_13();

        break;

    case 14:

        return make_14();

    case 15:

        return make_15();

        break;

    case 16:

        return make_16();

        break;

    case 17:

        return make_17();

        break;

    case 18:

        return make_18();

        break;

    case 19:

        return make_19();

    case 20:

        return make_20();

    case 21:

        return make_21();

        break;

    case 22:

        return make_22();

        break;

    case 23:

        return make_23();

        break;

    case 24:

        return make_24();

        break;
    }
    
    return make_999();
}
