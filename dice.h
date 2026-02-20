
using namespace std;

#pragma once

int roll(int d, int num_of_rolls, bool a_or_d)
{
	srand(time(NULL));

	if (a_or_d == true)
	{
		return ((rand() % d) + 1);
	}
	else
	{
		int sum = 0;

		for (int i = 0; i < num_of_rolls; i++)
		{
			sum += ((rand() % d) + 1);
		}

		return sum;
	}
}

int roll_with_advantage(int d, int num_of_rolls)
{
	int roll_a;
	int roll_b;

	if (num_of_rolls == 1)
	{
		roll_a = roll(d, num_of_rolls, true);
		roll_b = roll(d, num_of_rolls, true);

		if (roll_a >= roll_b)
		{
			return roll_a;
		}
		else
		{
			return roll_b;
		}

	}
	else
	{
		int sum = 0;

		for (int i = 0; i < num_of_rolls; i++)
		{
			roll_a = roll(d, num_of_rolls, true);
			roll_b = roll(d, num_of_rolls, true);

			if (roll_a >= roll_b)
			{
				sum += roll_a;
			}
			else
			{
				sum += roll_b;
			}

			return sum;
		}
	}
}

int roll_with_disadvantage(int d, int num_of_rolls)
{
	int roll_a;
	int roll_b;

	if (num_of_rolls == 1)
	{
		roll_a = roll(d, num_of_rolls, true);
		roll_b = roll(d, num_of_rolls, true);

		if (roll_a <= roll_b)
		{
			return roll_a;
		}
		else
		{
			return roll_b;
		}

	}
	else
	{
		int sum = 0;

		for (int i = 0; i < num_of_rolls; i++)
		{
			roll_a = roll(d, num_of_rolls, true);
			roll_b = roll(d, num_of_rolls, true);

			if (roll_a <= roll_b)
			{
				sum += roll_a;
			}
			else
			{
				sum += roll_b;
			}

			return sum;
		}
	}
}