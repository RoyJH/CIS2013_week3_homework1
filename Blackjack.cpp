#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	const int max = 21;

	int player_total = 1;
	int player_card = (rand() % 10 + 1);
	int dealer_total = 1;
	int dealer_card = (rand() % 10 + 1);
	
	char playing = 'Y';
	char hit = 'H';
	char stick = 'S';
	char move = 'H';

	cout << "This is a game of Blackjack.\n";
	cout << "Beat the dealer's hand and you win!\n";
	cout << "Draws go to the dealer.\n";

	while ((playing = 'Y') || (playing = 'y'))
	{
		cout << "Here's your first two cards.\n";
		cout << "Looks like you've got a " << player_card << " and " << player_card << endl;
		cout << "Your total is " << player_total << endl;
		cout << "The Dealer has " << dealer_card << endl;
		cout << "Would you like to hit or stick? \n";
		cout << "H to hit, S to stick";
		cin >> move;

		if (player_total > max)
		{
			cout << "Bust, you lose.\n";
			cout << "Better luck next time!\n";
			cout << endl;
			cout << "Would you like to play again? Y/N: ";
			cout << endl;
			cin >> playing;
		}

		else if (player_total <= max)
		{
			cout << "You got a " << player_card << ".\n";
			cout << "Are you feeling lucky...? Hit or Stick? ";
			cout << "Enter H to hit or S to Stick: ";
			cin >> move;
		}

		else if ((move = 's') || (move = 'S'))
		{
			cout << "You stick with " << player_total << endl;
			cout << "The dealer gets his second card now...\n";
			cout << "Dealer got a " << dealer_card << " , bringing his\n";
			cout << "new total to " << dealer_total << endl;
		}	
			if (dealer_total > max)
			{
				cout << "Whoops, looks like it's a bust...\n";
				cout << "Congratulations, you win by default!\n";
				cout << "Would you like to play again? Y/N: ";
				cout << endl;
				cin >> playing;
			}

			while (dealer_total <= 16) 
			{
				cout << "Dealer wants to hit!";
				cout << "The dealer's next card is a " << dealer_card << ".\n";
			}

			 if (dealer_total > 17)
			{	
				cout << "Dealer decides to stay.";
				cout << endl;
				cout << "You have " << player_total << "and the dealer\n";
				cout << "has " << dealer_total << ".\n";
			}
				else if (player_total > dealer_total)
				{
					cout << "Congratulations!  You Win!!!\n";
					cout << endl;
					cout << "Would you like to play again? Y/N: ";
					cout << endl;
					cin >> playing;
				}
	}


	return 0;
}

