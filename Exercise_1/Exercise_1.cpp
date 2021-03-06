// Exercise_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int randomNum;
int guess;
int lives = 5;

int main()
{
	cout << "Please enter a number between 1 and 100" << endl;

	srand(time(NULL));

	randomNum = rand() % 100;

	while (lives > 0)
	{
		cin >> guess;

		if (guess == randomNum)
		{
			cout << "You win!" << endl;
		}

		if (guess > randomNum)
		{
			cout << "Please select a lower number" << endl;
			--lives;
			cout << "You have " << lives << " lives left" << endl;
		}

		if (guess < randomNum)
		{
			cout << "Please select a higher number" << endl;
			--lives;
			cout << "You have " << lives << " lives left" << endl;
		}

		if (lives == 0)
		{
			cout << "Game Over" << endl;
		}

	}

	system("pause");
    return 0;
}

