#include "pack.h"
#include "items.h"
#include "dice.h"


using namespace std;

#pragma once

bool level_caps = true;

// don't die 
// goes up by 10 every level. 
const int base_health = 100;
// different magic attacks take different ammounts of mana to act, if you run out, you can not do anything, you are too tired.
// If you back up and wait a turn before running out, you will be safe and it will refresh. refresh is 1/4 max per turn.
// max goes up by 5 every level chosen
const int base_mana = 50;
// different melee and ranged attacks take different ammounts of focus to act, if you run out, you can not do anything, you are too tired.
// If you back up and wait a turn before running out, you will be safe and it will refresh. refresh is 1/4 max per turn.
// max goes up by 5 every level chosen
const int base_focus = 50;

// speed will be to see who goes first, followed by pack weight.
const int spe_lvl_cap = 10;
const int base_spe = 1;
// charisma will add to checks for purchases and sales.
const int cha_lvl_cap = 10;
const int base_cha = 1;

// technique is what melee damage is scaled off of
const int teq_lvl_cap = 5; 
const int base_teq = 1;
// inteligence is what magic damage is scaled off of
const int int_lvl_cap = 5;
const int base_int = 1;
// strength is what ranged damage is scaled off of
const int str_lvl_cap = 5;
const int base_str = 1;


const int entity_lvl_cap = 35;
const int base_lvl = 1;
const int base_exp = 0;

class entity
{
	public:
		string name;
		int health;
		int max_mana;
		int mana;
		int max_focus;
		int focus;

		int speed;
		int charisma;

		int technique;
		int inteligence;
		int strength;

		int level;
		int exp;

		item equiped_weapon;

		pack backpack;

		entity();
		entity(string i_name, int i_health, int i_max_mana, int i_mana, int i_max_focus, int i_focus, int i_spe, int i_cha, int i_teq, int i_int, int i_str, int i_lvl, int i_exp, int i_weapon);
		void revive();
		void level_up();
		int which_attribute();
		void heal(int ammount);
		void heal(entity character, int ammount);
		void hurt(int ammount);
		void hurt(entity character, int ammount);
		void attack(entity combatant);
		void slash_parry_reposte(entity combatant);
		void force_bolt(entity combatant);
		void shoot_an_arrow(entity combatant);
};

entity::entity()
{
	revive();
}

entity::entity(string i_name, int i_health, int i_max_mana, int i_mana, int i_max_focus, int i_focus, int i_spe, int i_cha, int i_teq, int i_int, int i_str, int i_lvl, int i_exp, int i_weapon)
{
	level = i_lvl;
	exp = i_exp;
	name = i_name;

	equiped_weapon = equiped_weapon.chose_make(i_weapon);

	health = i_health;
	max_mana = i_mana;
	mana = i_mana;
	max_focus = i_focus;
	focus = i_focus;
	speed = i_spe;
	charisma = i_cha;
	technique = i_teq;
	inteligence = i_int;
	strength = i_str;
}

void entity::revive()
{
	level = base_lvl;
	exp = base_exp;

	health = base_health;
	max_mana = base_mana;
	mana = base_mana;
	max_focus = base_focus;
	focus = base_focus;
	speed = base_spe;
	charisma = base_cha;
	technique = base_teq;
	inteligence = base_int;
	strength = base_str;
}

void entity::level_up()
{
	bool valid = false;
	int mana_or_focus;
	

	health += 10;
	level++;

	while (valid == false)
	{
		if (which_attribute() == 0)
		{
			valid = true;
		}
		else
		{
			// already at max level, chose again
			cout << "FILL IN!!!!" << endl << "LOCATED @: ENTITY::LEVEL_UP";

		}
	}

	valid = false;

	while (valid == false)
	{
		// mana or focus
		cout << "FILL IN!!!!" << endl << "LOCATED @: ENTITY::LEVEL_UP";
		cin >> mana_or_focus;

		if (mana_or_focus == 0)
		{
			max_mana += 5;
		}
		else if (mana_or_focus == 1)
		{
			max_focus += 5;
		}
		else
		{
			// not a valid option
			cout << "FILL IN!!!!" << endl << "LOCATED @: ENTITY::LEVEL_UP";
		}
	}
}


int entity::which_attribute()
{
	int choice;
	
	// which attributes to level up
	cout << "FILL IN!!!!" << endl << "LOCATED @: which_attribute";
	cin >> choice;

	switch (choice)
	{
		//speed
	case 1:

		if (level_caps == true)
		{
			if (speed == spe_lvl_cap)
			{
				return 1;
			}
			else
			{
				speed++;

				// congrats
				cout << "FILL IN!!!!" << endl << "LOCATED @: which_atteibute";
			}
		}
		else
		{
			speed++;
		}

		break;

		// charisma
	case 2:

		if (level_caps == true)
		{
			if (charisma == cha_lvl_cap)
			{
				return 1;
			}
			else
			{
				charisma++;

				// congrats
				cout << "FILL IN!!!!" << endl << "LOCATED @: which_atteibute";
			}
		}
		else
		{
			charisma++;
		}

		break;

		// technique
	case 3:

		if (level_caps == true)
		{
			if (technique == teq_lvl_cap)
			{
				return 1;
			}
			else
			{
				technique++;

				// congrats
				cout << "FILL IN!!!!" << endl << "LOCATED @: which_atteibute";
			}
		}
		else
		{
			technique++;
		}

		break;

		// inteligence
	case 4:

		if (level_caps == true)
		{
			if (inteligence == int_lvl_cap)
			{
				return 1;
			}
			else
			{
				inteligence++;

				// congrats
				cout << "FILL IN!!!!" << endl << "LOCATED @: which_atteibute";
			}
		}
		else
		{
			inteligence++;
		}

		break;

		// strength
	case 5:

		if (level_caps == true)
		{
			if (strength == str_lvl_cap)
			{
				return 1;
			}
			else
			{
				strength++;

				// congrats
				cout << "FILL IN!!!!" << endl << "LOCATED @: which_atteibute";
			}
		}
		else
		{
			strength++;
		}

		break;

	}

}

void entity::heal(int ammount)
{
	health += ammount;
}

void entity::heal(entity character, int ammount)
{
	character.health += ammount;
}

void entity::hurt(int ammount)
{
	health -= ammount;
}

void entity::hurt(entity character, int ammount)
{
	character.health -= ammount;
}

// which attack
// 4 of each kind 
// melee:  Slash(Damage), Shallow Cut(Bleed and Small Damage), Take and Lunge(Small Damage, Advantage Counter and o.Dissadvantage Counter), Vital Stab(Large Damage and Bleed)
// ranged: Fire an Arrow(Small Damage and Bleed), over-draw(Damage and o.Dissadvantage Counter), Poison Tip Arrow(Poison and small Damage), Explosive Arrow(Large Damage and Force)
// magic:  Phase Bolt(Small Damage), Witch Bolt(Paralyze and Small Damage), Sleep(Sleep), Fire Ball(Burn and Large Damage)
void entity::attack(entity combatant)
{
	int choice;

	if (equiped_weapon.number == 1 || equiped_weapon.number == 2 || equiped_weapon.number == 3 || equiped_weapon.number == 4)
	{
		cout << "FILL IN!!!!" << endl << "LOCATED @: entity::attack";
		cin >> choice;

		
	}
	else if (equiped_weapon.number == 6 || equiped_weapon.number == 6 || equiped_weapon.number == 7 || equiped_weapon.number == 8)
	{
		cout << "FILL IN!!!!" << endl << "LOCATED @: entity::attack";
		cin >> choice;
	}
	else if (equiped_weapon.number == 9 || equiped_weapon.number == 10 || equiped_weapon.number == 11 || equiped_weapon.number == 12)
	{
		cout << "FILL IN!!!!" << endl << "LOCATED @: entity::attack";
		cin >> choice;
	}
}