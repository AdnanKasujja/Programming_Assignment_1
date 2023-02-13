

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
	int currentPosition = 1;
	char currentDirection1 = 'N', currentDirection2 = 'E';
	string currentDirection3 = "North", currentDirection4 = "East", currentDirection5;
	int round = 1;



	cout << "Get Ready! You need to reach the end of the maze to collect the treasure! \n" << endl;
	cout << "You can only get the treasure once you have collected the key, which is hidden somewhere else in the maze \n" << endl;
	cout << "For every step taken, you will lose 10 points. If you bump into a wall, you lose 5 points.  \n " << endl;
	cout << "If you run out of points or your lives, you lose! \n" << endl;
	cout << "Begin! \n" << endl;


	system("PAUSE");
	system("cls");

	do {
		cout << "You are currently at Position " <<currentPosition << " \n" << endl;
		cout << "Press " <<currentDirection1 << " to move "<< currentDirection3 <<",or Press " << currentDirection2 << " to Move " <<currentDirection4 << endl;
		cin >> playerInput;


		if (currentPosition ==1 && playerInput == "N")
		{

			playerPoints = playerPoints - 10;
			currentPosition = 8;
			currentDirection1 = 'E';
			currentDirection2 = 'S';
			currentDirection3 = "East";
			currentDirection4 = "South";
			cout << "You moved North! You are currently at Position " <<currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press E to move East, or S to move South" << endl;
			system("PAUSE");
			system("cls");			
		}
		else if (playerInput == "E")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 2;
			currentDirection1 = 'N';
			currentDirection2 = 'W';
			currentDirection3 = "North";
			currentDirection4 = "West";
			cout << "You moved East! You are currently at Position " <<currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, or W to move West" << endl;
			system("PAUSE");
			system("cls");   
		}
		else if (currentPosition == 2 && playerInput == "N")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 3;
			currentDirection1 = 'N';
			currentDirection2 = 'S';
			currentDirection3 = "North";
			currentDirection4 = "South";
			currentDirection5 = "East";
			cout << "You moved North! You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, S to move South, or E to move East" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (playerInput == "W" && currentPosition == 2)
		{
			playerPoints = playerPoints - 10;
			currentPosition = 1;
			currentDirection1 = 'N';
			currentDirection2 = 'E';
			currentDirection3 = "North";
			currentDirection4 = "East";
			cout << "You moved West! You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have \n" << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, or E to move East" << endl;
			system("PAUSE");
			system("cls");
		}

	} while (playerPoints > 0);

	system("PAUSE");

	if (playerPoints == 0)
	{
		cout << "Game Over" << endl;
	}
	else if (numberOfLives == 0)
	{
		cout << "Game Over" << endl;
	}
	else if (playerInput == "X" || "x")
	{
		cout << "You exited the map" << endl;
	}
	system("PAUSE");
	return 0;
}