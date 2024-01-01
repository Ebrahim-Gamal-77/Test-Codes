
#include <iostream>
#include <ctime>

int main()
{
	
	srand(time(NULL));

	int randomNum = (rand() % 100) + 1;
	int guess;
	int tries = 0;

	std::cout << "******** NUMBER GUESSING GAME ********\n";

	do {

		std::cout << "Enter a guess between (1 - 100): ";
		std::cin >> guess;
		tries++;

		if (guess < 1 || guess > 100) {
			std::cout << "Try again! ... you are out of range\n";
		}
		else if (guess < randomNum) {
			std::cout << "Too low\n";
		}
		else if (guess > randomNum) {
			std::cout << "Too high\n";
		}
		else {
			std::cout << "\nCorrect! ... The correct number is: " << randomNum << std::endl;
			std::cout << "Number of tries: " << tries << std::endl;
		}

		

	} while (guess != randomNum);

		std::cout << "************************************\n";

		// hello world
					  
}
