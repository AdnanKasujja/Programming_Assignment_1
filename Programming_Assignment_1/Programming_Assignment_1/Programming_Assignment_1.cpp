

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
	char currentDirection1 = 'N', currentDirection2 = 'E', currentDirection6 = 'W';
	string currentDirection3 = "North", currentDirection4 = "East", currentDirection5;
	bool hasKey = false;
	bool isGameDone = false;
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
		cout << "Press " <<currentDirection1 << " to move "<< currentDirection3 <<",or Press " << currentDirection2 << " to Move " <<currentDirection4 <<" \n" <<endl;
		cout << "You can also press " << currentDirection6 << " to move " << currentDirection5 << endl;
		cin >> playerInput;


		if (currentPosition == 1 && playerInput == "N")
		{

			playerPoints = playerPoints - 10;
			currentPosition = 8;
			currentDirection1 = 'E';
			currentDirection2 = 'S';
			currentDirection3 = "East";
			currentDirection4 = "South";
			cout << "You moved North! You are currently at Position " <<currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press E to move East, or S to move South" << endl;
			system("PAUSE");
			system("cls");			
		}
		else if (currentPosition == 1 && playerInput == "E")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 2;
			currentDirection1 = 'N';
			currentDirection2 = 'W';
			currentDirection3 = "North";
			currentDirection4 = "West";
			cout << "You moved East! You are currently at Position " <<currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
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
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, S to move South, or E to move East" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (currentPosition == 2 && playerInput == "W")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 1;
			currentDirection1 = 'N';
			currentDirection2 = 'E';
			currentDirection3 = "North";
			currentDirection4 = "East";
			cout << "You moved West! You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, or E to move East" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (currentPosition == 3 && playerInput == "N")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 4;
			currentDirection1 = 'E';
			currentDirection2 = 'W';
			currentDirection6 = 'S';
			currentDirection3 = "East";
			currentDirection4 = "West";
			currentDirection5 = "South";
			cout << "You moved North! You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press E to move East, W to move West, or S to move South" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (currentPosition == 3 && playerInput == "S")
		{
			playerPoints = playerPoints - 10;
			currentPosition = 2;
			currentDirection1 = 'N';
			currentDirection2 = 'W';
			currentDirection3 = "North";
			currentDirection4 = "West";
			cout << "You moved South! You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, or W to move West" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (currentPosition == 3 && playerInput == "E")
		{
			playerPoints = playerPoints - 10;
			numberOfLives = numberOfLives - 1;
			currentPosition = 3;
			currentDirection1 = 'N';
			currentDirection2 = 'S';
			currentDirection6 = 'E';
			currentDirection3 = "North";
			currentDirection4 = "South";
			currentDirection5 = "East";
			cout << "You stepped on poison, and lost a life! \n" << endl;
			system("PAUSE");
			cout << "You now have " << numberOfLives << " lives remaining. \n" << endl;
			system("PAUSE");
			cout << "Currently, you have " << playerPoints << " points" << endl;
			system("PAUSE");
			cout << "You are currently at Position " << currentPosition << " \n" << endl;
			system("PAUSE");
			cout << "You can either Press N to move North, S to move South, or E to move East" << endl;
			system("PAUSE");
			system("cls");
		}
		else if (currentPosition == 4 && playerInput == "E")
		{
		playerPoints = playerPoints - 10;
		numberOfLives = numberOfLives - 1;
		currentPosition = 4;
		currentDirection1 = 'W';
		currentDirection2 = 'S';
		currentDirection6 = 'E';
		currentDirection3 = "West";
		currentDirection4 = "South";
		currentDirection5 = "East";
		cout << "You stepped on poison, and lost a life! \n" << endl;
		system("PAUSE");
		cout << "You now have " << numberOfLives << " lives remaining. \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "You can either Press W to move West, S to move South, or E to move East" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 4 && playerInput == "W")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 5;
		currentDirection1 = 'E';
		currentDirection2 = 'W';
		currentDirection6 = 'S';
		currentDirection3 = "East";
		currentDirection4 = "West";
		currentDirection5 = "South";
		cout << "You moved West! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press E to move East, W to move West, or S to move South" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 4 && playerInput == "S")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 3;
		currentDirection1 = 'N';
		currentDirection2 = 'S';
		currentDirection6 = 'E';
		currentDirection3 = "North";
		currentDirection4 = "South";
		currentDirection5 = "East";
		cout << "You moved South! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press N to move North, S to move South, or E to move East" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 5 && playerInput == "E")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 4;
		currentDirection1 = 'E';
		currentDirection2 = 'W';
		currentDirection6 = 'S';
		currentDirection3 = "East";
		currentDirection4 = "West";
		currentDirection5 = "South";
		cout << "You moved East! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press E to move East, W to move West, or S to move South" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 5 && playerInput == "W")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 6;
		currentDirection1 = 'E';
		currentDirection3 = "East";
		cout << "You moved West! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "You need the key to open the treasure! Go back and find it!" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "Press E to Move East" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 5 && playerInput == "S")
		{
		playerPoints = playerPoints + 50;
		bool hasKey = true;
		currentPosition = 7;
		currentDirection1 = 'N';
		currentDirection2 = 'W';
		currentDirection3 = "North";
		currentDirection4 = "West";
		cout << "You moved South, and collected the key! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "With the key, you can now open the treasure, and win the game!" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "Press N to Move North, or W to Move West" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 6 && playerInput == "E")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 5;
		currentDirection1 = 'E';
		currentDirection2 = 'W';
		currentDirection6 = 'S';
		currentDirection3 = "East";
		currentDirection4 = "West";
		currentDirection5 = "South";
		cout << "You moved East! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press E to move East, W to move West, or S to move South" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (hasKey == true && currentPosition == 6)
		{
		cout << "With key in hand, you are able to open the treasure, and win the game! \n" << endl;
		cout << "Goodbye! \n" << endl;
		isGameDone = true;
		}
		else if (currentPosition == 7 && playerInput == "N")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 5;
		currentDirection1 = 'E';
		currentDirection2 = 'W';
		currentDirection6 = 'S';
		currentDirection3 = "East";
		currentDirection4 = "West";
		currentDirection5 = "South";
		cout << "You moved North! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press E to move East, W to move West, or S to move South" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 7 && playerInput == "W")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 8;
		currentDirection1 = 'E';
		currentDirection2 = 'S';
		currentDirection3 = "East";
		currentDirection4 = "South";
		cout << "You moved West! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press E to move East, or S to move South" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 8 && playerInput == "E")
		{
		playerPoints = playerPoints + 50;
		bool hasKey = true;
		currentPosition = 7;
		currentDirection1 = 'N';
		currentDirection2 = 'W';
		currentDirection3 = "North";
		currentDirection4 = "West";
		cout << "You moved East, and collected the key! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "With the key, you can now open the treasure, and win the game!" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "Press N to Move North, or W to Move West" << endl;
		system("PAUSE");
		system("cls");
		}
		else if (currentPosition == 8 && playerInput == "S")
		{
		playerPoints = playerPoints - 10;
		currentPosition = 1;
		currentDirection1 = 'N';
		currentDirection2 = 'E';
		currentDirection3 = "North";
		currentDirection4 = "East";
		cout << "You moved South! You are currently at Position " << currentPosition << " \n" << endl;
		system("PAUSE");
		cout << "Currently, you have " << playerPoints << " points" << endl;
		system("PAUSE");
		cout << "You can either Press N to move North, or E to move East" << endl;
		system("PAUSE");
		system("cls");
		}

	} while (playerPoints > 0 || numberOfLives > 0);

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