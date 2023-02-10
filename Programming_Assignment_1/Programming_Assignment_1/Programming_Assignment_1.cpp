

/* Programming_Assignment 1
	Javier Orduno, 100818214
	Adnan Kasujja, 100793545
 */






#include <iostream>
#include <string>
using namespace std;


int main()
{


	int playerPoints = 200;
	int numberOfLives = 2;
	string playerInput;
	int round = 1;



	cout << "Get Ready! You have to reach the end of the maze to collect the treasure! \n" << endl;
	cout << "You can only get the treasure once you have collected the key, which is hidden somewhere else in the maze \n" << endl;
	cout << "For every step taken, you will lose 10 points. If you bump into a wall, you lose 5 points.  \n " << endl;
	cout << "You lose if you run out of points, and lives!" << endl;
	cout << "Begin! \n" << endl;


	system("PAUSE");
	system("cls");

	do {
		cout << "Press Enter to Start! \n \n" << endl;
		cout << "You are currently at Position 1 \n" << endl;
		cout << "Press N to move North, Press E to Move East" << endl;


		if (playerInput == "N")
		{

			playerPoints - 10;
			cout << "You moved North! You are currently at Position 8 \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << endl;
			system("PAUSE");
			cout << "You can either Press E to move East, or S to move South" << endl;
			system("cls");
		}
		else if (playerInput == "E")
		{
			playerPoints - 10;
			cout << "You moved East! You are currently at Position 2 \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, or W to move West" << endl;
			system("cls");
		}
	} while (playerPoints != 0 || numberOfLives != 0);
	system("PAUSE");
	
	if (playerPoints == 0 || numberOfLives == 0)
	{
		cout << "Game Over" << endl;
	}

	system("PAUSE");
	return 0;
}