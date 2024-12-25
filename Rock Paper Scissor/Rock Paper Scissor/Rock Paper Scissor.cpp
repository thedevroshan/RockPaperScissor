#include <iostream>
#include <random>


int main()
{
	bool isGameExit = false;
	while (!isGameExit)
	{
		std::cout << "Rock Paper Scissor Game\n";
		std::cout << "1. Rock\n";
		std::cout << "2. Paper\n";
		std::cout << "3. Scissor\n";
		std::cout << "4. Exit\n";
		std::cout << "Enter your choice: ";
		int userChoice;
		std::cin >> userChoice;
		if (userChoice == 4)
		{
			isGameExit = true;
			continue;
		}
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_int_distribution<int> dist(1, 3);
		int computerChoice = dist(mt);
		if (userChoice == computerChoice)
		{
			std::cout << "It's a tie\n";
		}
		else if (userChoice == 1 && computerChoice == 3)
		{
			std::cout << "You win\n";
		}
		else if (userChoice == 2 && computerChoice == 1)
		{
			std::cout << "You win\n";
		}
		else if (userChoice == 3 && computerChoice == 2)
		{
			std::cout << "You win\n";
		}
		else
		{
			std::cout << "You lose\n";
		}
	}
}