#include "../../std_lib_facilities.h"

char computer(char user_choice, string diff)
{
	vector<char> comp_play = { 'r', 'p', 's' };
	if (diff == "a")
	{
		if (user_choice == 'r')
		{
			return comp_play[0];
		}
		else if (user_choice == 'p1')
		{
			return comp_play[1];
		}
		else if (user_choice == 's1')
		{
			return comp_play[2];
		}
	}
	else if (diff == "b")
	{
		if (user_choice == 'r')
		{
			return comp_play[1];
		}
		else if (user_choice == 'p')
		{
			return comp_play[2];
		}
		else if (user_choice == 's')
		{
			return comp_play[0];
		}
	}
	else if (diff == "c")
	{
		switch (user_choice)
		{
		case 'r':
			return comp_play[2];
			break;
		case 'p':
			return comp_play[0];
				break;
		case 's':
			return comp_play[1];
			break;
		default:
			break;
		}
	}
}

int main()
{
	cout << "This is a game of Rock, Paper, Scissor (r, p, c)\n";
	cout << "Select game mode (a, b, c): ";
	string diff{};
	cin >> diff;

	char play{};
	char cmp_play{};

	while (cin >> play)
	{
		switch (play)
		{
		case 'r':
			cmp_play = computer('r', diff);
			cout << "Computer plays " << cmp_play << '\n';
			switch (cmp_play)
			{
			case 'r':
				cout << "\nEqual items\n";
				break;
			case 'p':
				cout << "\nComputer wins\n";
				break;
			case 's':
				cout << "\nUser wins\n";
			default:
				break;
			}
			break;

		case 'p':
			cmp_play = computer('p', diff);
			cout << "Computer plays " << cmp_play << '\n';
			switch (cmp_play)
			{
			case 'r':
				cout << "\nUser wins\n";
				break;
			case 'p':
				cout << "\nEqual item\n";
				break;
			case 's':
				cout << "\nComputer wins\n";
				break;
			default:
				break;
			}
			break;
		case 's':
			cmp_play = computer('s', diff);
			cout << "Computer plays " << cmp_play << '\n';
			switch (cmp_play)
			{
			case 'r':
				cout << "\nUser wins\n";
				break;
			case 'p':
				cout << "\nConmputer wins\n";
				break;
			case 's':
				cout << "\nEqual items\n";
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
}