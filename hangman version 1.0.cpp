#include<iostream>
#include<string>
using namespace std;

int option;

void show() {
	cout << "                          -----------Home-----------                        " << "\n";
	cout << "                                                                            " << "\n";
	cout << "      1. Start game                                        2. Exit game" << "\n";
	cin >> option;
}
int main() {
	string player1, player2, word, underscore, guess;
	int wrong = 0;
	string copy = word;
	cout << "select an option" << "\n";
	show();
	
	do {
		
		system("cls");
		switch (option) {
		case 1: {cout << "player 1 enter your name" << "\n";
			cin >> player1;
			cout << "player 2 enter your name" << "\n";
			cin >> player2;
			cout << player1 << " please enter the word you want " << player2 << " to guess " << "\n";
			cin >> word;
			for (int x = 0; x << 20; x++) { cout << endl; }
			while (underscore.size() != word.size())
			{
				underscore.push_back('_');
			}cout << underscore << endl;

			while (wrong < 5) {
				cin >> guess;
				if (guess.size() > 1) {
					if (guess == word) {
						cout << "correct word" << "\n";
						break;
					}
					else {
						cout << underscore << endl;
						cout << "wrong word entered..try again" << endl;
						wrong++;
					}
				}
				if (underscore == word) {
					cout << " YOU WON!" << endl;
					break;
				}

				if (wrong == 1) {
					cout << "I" << "\n";
				}
				else if (wrong == 2) {
					cout << "I" << "\n";
					cout << "I" << endl;
				}
				else if (wrong == 3) {
					cout << "I ==" << "\n";
					cout << "I" << "\n";
					cout << "I" << "\n";
				}
				else if (wrong == 4) {
					cout << "I ===" << endl;
					cout << "I  O " << endl;
					cout << "I -|-" << endl;
					cout << "I     " << endl;
				}
				else if (wrong == 5) {
					cout << "I ===" << endl;
					cout << "I  O " << endl;
					cout << "I -|-" << endl;
					cout << "I  /   " << endl;
					cout << "I  /   " << endl;
					cout << " ops you died! " << endl;
					break;
				}

			}
		}break;
			
			
		case 2: { cout << "Thank you for playing, hope you enjoyed the game!" << endl;
			break; }
		}
	} while (option != 2);
	
}




				





	








